#include <stdio.h>
#include "ffmc.h"
#include <string.h>
int pointsHandler(int points_to_add,char *fileq)
{
    //init
    int points=0;
    char lineq[80];
    char ans[7];
    //DONT CHANGE THE NUMBER !!!!!!
    int qora=0;
    //^^^^ DONT EVEN THINK ABOUT TOUCHING THAT ,srsly dont
    FILE *file1;
    if(!(file1=fopen(fileq,"r")))
   {
   fprintf(stderr,"error cant find the file\n");
   return -1;
   }

 
    //Q&A 
    while(fscanf(file1,"%79[^\n]\n",lineq)==1)
    {
        //to see if its a question or not 1= yes 0= no
        
        if(qora==1)
        qora=0;
        else if (qora==0)
        qora=1;
        
        //questions and answers
        switch(qora)
        {
            case 1:
            printf("%s\n",lineq);
            break;
            case 0:
            fscanf(stdin,"%6s",ans);
            
            if(strstr(lineq,ans))
            {
                points+=points_to_add;
            }
            break;
            default:
            fprintf(stderr,"ERROR");
            break;
            
        }
    }
    return points;
}

