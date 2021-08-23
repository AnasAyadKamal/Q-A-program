#include <stdio.h>
#include "ffmc.h"
#include <stdlib.h>
int main()
{
     int points;
    points=pointsHandler(6,"QA.txt");
    //results
    if(points==-1)
    return 1;
    if(points<=10)
    {
        printf("\n-----------Your Cat might be around 0-2 months-----------\n");
    }
    else if(points<=20&&points>10)
    {
        printf("\n-----------Your Cat might be around 2-12 months-----------\n");
    } else
    {
        printf("\n-----------Your Cat might be an adult-----------\n");
    }
    return 0;
}
