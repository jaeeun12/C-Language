#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main(void)
{
    int av = 0;       //이긴 횟수
    int bv = 0;
    int cv = 0;
    int a;        //배팅금액
    int b;
    int c;
    int am = 1000;       //보유금액
    int bm = 1000;
    int cm = 1000;
    int A;                //숫자 선택 
    int B;
    int C;
    for(int i=1;i<=10;i++)
    {
    int num = 1 + rand()%6;
    srand((unsigned)time(NULL));
     
    printf("1p 1~6중 숫자를 선택하시오: \n");    
    scanf("%d",&A);
    printf("1p 배팅금액을 입력하시오(보유금액: %d): \n",am);
    scanf("%d",&a);
   
    printf("2p 1~6중 숫자를 선택하시오: \n");    
    scanf("%d",&B);
    printf("2p 배팅금액을 입력하시오(보유금액: %d) \n",bm);
    scanf("%d",&b);
    
    printf("3p 1~6중 숫자를 선택하시오: \n");    
    scanf("%d",&C);
    printf("3p 배팅금액을 입력하시오(보유금액: %d) \n",cm);
    scanf("%d",&c);        
          
    printf("게임 시작 \n");
    {
        if(num == A){
            av++;
            am += a*2;
            printf("win,%d \n",am);
        }
        else
        {
            am = am-a;
            printf("lose,%d \n",am);     
        }
        if(num == B){
            bv++;
            bm += b*2;
            printf("win,%d \n",bm);  
        }
        else
        {
            bm = bm - b;
            printf("lose,%d \n",bm);
        }
        if(num == C){
            cv++;
            cm += c*2;
            printf("win,%d \n",cm);
        }
        else
        {
            cm = cm - c;
            printf("lose,%d \n",cm);
        }
        printf("나온 주사위: %d \n",num);
    }

}
    printf("1p 이긴 횟수 + 보유금액: %d %d\n",av,am);
    printf("2p 이긴 횟수 + 보유금액: %d %d\n",bv,bm);
    printf("3p 이긴 횟수 + 보유금액: %d %d\n",cv,cm);  
}
    

