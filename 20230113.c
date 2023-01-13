#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct student
{
    int num;
    char name[20];
    int kor;
    int eng;
    int math;
    double sum;
    double avg;
};

int main(void)
{
    struct student s_list[10];
    srand((unsigned)time(NULL));
    int i;
    
    for(int i=0;i<10;i++)
    {
        s_list[i].num = i+1;
        s_list[i].kor = rand()%100+1;
        s_list[i].eng = rand()%100+1;
        s_list[i].math = rand()%100+1;
        s_list[i].sum = s_list[i].kor + s_list[i].eng + s_list[i].math;
        s_list[i].avg = s_list[i].sum/3;
    }        
    
    printf("번호\t국어\t영어\t수학\t총점\t평균 \n");   
    printf("_____________________________________________\n");
    
    for(int i=0;i<10;i++)
    {
        printf("%d\t%d\t%d\t%d\t%.f\t%.1f\n",s_list[i].num,s_list[i].kor,s_list[i].eng,s_list[i].math,s_list[i].sum,s_list[i].avg);
    }
   
    
    return 0;
}