#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#define student 20             
    int kor[student] = {0};
    int sum,min,max;
    int cls[10];
int main(void)
{

    
   srand((unsigned)time(NULL));
    
    for(int i=0;i<student;i++)
    kor[i] = rand()%100+1;
    
    
    for(int i=0;i<student;i++)
{
    if(kor[i]<=9 && kor[i]>0)
        ++cls[0];
    else if(kor[i]<=19 && kor[i]>=10)
        ++cls[1];
    else if(kor[i]<=29 && kor[i]>=20)
        ++cls[2];
    else if(kor[i]<=39 && kor[i]>=30)
        ++cls[3];
    else if(kor[i]<=49 && kor[i]>=40)
        ++cls[4];
    else if(kor[i]<=59 && kor[i]>=50)
        ++cls[5];
    else if(kor[i]<=69 && kor[i]>=60)
        ++cls[6];
    else if(kor[i]<=79 && kor[i]>=70)
        ++cls[7];
    else if(kor[i]<=89 && kor[i]>=80)
        ++cls[8];
    else 
        ++cls[9];
}
    printf("[1~9]");
    for(int i=0;i<cls[0];i++)
        printf("*");
    printf("\n[10~19]");
    for(int i=0;i<cls[1];i++)
        printf("*");
    printf("\n[20~29]");
    for(int i=0;i<cls[2];i++)
        printf("*");
    printf("\n[30~39]");
    for(int i=0;i<cls[3];i++)
        printf("*");
    printf("\n[40~49]");
    for(int i=0;i<cls[4];i++)
        printf("*");
    printf("\n[50~59]");
    for(int i=0;i<cls[5];i++)
        printf("*");
    printf("\n[60~69]");
    for(int i=0;i<cls[6];i++)
        printf("*");
    printf("\n[70~79]");
    for(int i=0;i<cls[7];i++)
        printf("*");
    printf("\n[80~89]");
    for(int i=0;i<cls[8];i++)
        printf("*");
    printf("\n[90~100]");
    for(int i=0;i<cls[9];i++)
        printf("*");
    
    for(int i=0;i<student;i++)
        sum +=kor[i];
    printf("\n평균 점수: %d \n ",sum/student);
    
    for(int i=0;i<student;i++)
    {
        if(max<kor[i])
            max = kor[i];
        if(min>kor[i])
            min = kor[i];
    }
    printf("최대 점수: %d \n최소점수: %d",max,min);

        
    
    return 0;
    
    
}
