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
     int i=0;
     int d=0;
     FILE *answers_file;
     FILE *clear_file;
    //dont change
    if(points==-1)
    return 1;
//options ( if it was -c)
    while((ch=getopt(argc,argv,"c"))!= EOF)
    {
        switch(ch)
        {
            case 'c':
            clear_file=fopen("A.txt","w");
            fprintf(clear_file,"");
            fclose(clear_file);
            answers_file=fopen("A.txt","a");
            scanf("%79s",a_line[0]);
            fprintf(answers_file,"%s\n",a_line[0]);
            fscanf(answers_file,"%79[^\n]\n",r_line[0]);
             scanf("%79s",a_line[1]);
            fprintf(answers_file,"%s\n",a_line[1]);
            fscanf(answers_file,"%79[^\n]\n",r_line[1]);
               scanf("%79s",a_line[2]);
            fprintf(answers_file,"%s\n",a_line[2]);
              fscanf(answers_file,"%79[^\n]\n",r_line[2]);
        
        break;
        }
        
    }
//end of -c
printf("Questions_________:");
   points=pointsHandler(1,"QA.txt");


if(points<=10)
printf("%s",r_line[0]);
    else if(points>10&&points<=20)
    printf("%s",r_line[1]);
    else
    printf("%s",r_line[1]);

//basic might delete 
   printf("\n---Your Points: %d---\n",points);
   fclose(answers_file);
    return 0;
}
