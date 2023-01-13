#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main(void)
{
    double grades[10];
    int scores[10];
    int i=0;
         
    srand((unsigned)time(NULL));
    
    for(i=0;i<10;i++)
    {
        grades[i] = rand()%5 + rand()%10/100.0;
    }
    for(i=0;i<10;i++)
    {
        scores[i]=(100/4.3)*grades[i];
    }
    for(i=0;i<10;i++)
    {
        printf("\n");
        printf("점수: %d  학점:%.2f",scores[i],grades[i]);
    }
    
}