#include <stdio.h>
#include "ffmc.h"
#include <stdlib.h>
#include <unistd.h>


int main(int argc,char *argv[])
{
     int points;
     char ch;
     char a_line[2][80];
     char r_line[2][80];
     char q_line[80];
     int i=0;
     FILE *answers_file;
     FILE *read_file;
     FILE *clear_file;
     FILE *qa_file;    
    //dont change
    if(points==-1)
    return 1;
answers_file=fopen("A.txt","a");
read_file=fopen("A.txt","r");
qa_file=fopen("QA.txt","r");
//options ( if it was -c)
    while((ch=getopt(argc,argv,"c"))!= EOF)
    {
        switch(ch)
        {
            case 'c':
            clear_file=fopen("A.txt","w");
            fprintf(clear_file,"");
            fclose(clear_file);

            
            scanf("%79s",a_line[0]);
            fprintf(answers_file,"%s\n",a_line[0]);
             scanf("%79s",a_line[1]);
            fprintf(answers_file,"%s\n",a_line[1]);
               scanf("%79s",a_line[2]);
            fprintf(answers_file,"%s\n",a_line[2]);
        
        break;
	    default:
	  break;

        }
        
    }
//end of -
//c
//
 fscanf(read_file,"%79[^\n]\n",r_line[0]);
         fscanf(read_file,"%79[^\n]\n",r_line[1]);
          fscanf(read_file,"%79[^\n]\n",r_line[2]);

printf("Questions_________:");
   points=pointsHandler(1,"QA.txt");
while(fscanf(qa_file,"%79[^\n]\n",q_line)==1)
i++;
i/=2;
printf("%d",i);
if(points<=i*0.3)
printf("%s",r_line[0]);
    else if(points>i*0.3&&points<=i*0.5)
    printf("%s",r_line[1]);
    else
    printf("%s",r_line[2]);

//basic might delete 
   printf("\n---Your Points: %d/%d---\n",points,i);
   fclose(answers_file);
    return 0;
}
