#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main(void)
{
    int s[10][5], i, j;                                  //10열 5행 배열 출력 변수 i j 출력 
     
    srand((unsigned)time(NULL));                         
    for(i=0; i<10; i++)
    { 
        s[i][3]=0;                                      //10명의 국어 영어 수학 점수를 0으로 선언 
        for(j=0; j<3; j++)
        {    
            s[i][j]=rand()%100+1;                       //10명의 국어 영어 수학 점수를 1~100까지 랜덤으로 생성 
            s[i][3]+=s[i][j];                           //s[i][3] = s[i][3] + s[i][j]
        }
    }
    for(i=0; i<10; i++ )
    {
        s[i][4]=1;
        for(j=0; j<10; j++)
           if( s[i][3] < s[j][3] )
               s[i][4]++;
    }    
    
    printf("학생수 국어 영어 수학 총점 평균 등수\n");
    printf("----------------------------------\n");
    for(i=0; i<10; i++)
    {
        printf("%4d ", i+1);                             //학생수 
        for(j=0; j<4; j++)
            printf("%4d ", s[i][j]);                     //
            printf("%5d",s[i][3]/3);                     //국어 영어 수학의 점수 평균을 나타남 
            printf("%4d\n", s[i][4]);                    //
    }
    return 0;
}

