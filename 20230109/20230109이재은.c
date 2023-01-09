#include <stdio.h>

int main(void)
{
    int i = 10;                                    //정수 변수 i가 선언되고 10으로 초기화 된다.
    int *p;                                       //정수 포인터가 선언된다
    p=&i;                                        //포인터 p에 변수 i의 주소를 저장한다.
    printf("%d \n",*p);                            
   
    /*double f = 12.3;                      //실수형    
    int *pi = NULL;                        //포인터 초기화 
    double *pf = NULL                      
    
    
    
    pi = &i;
    pf = &f;
    printf("%u %u \n",pi,&i);
    printf("%u %u \n",pf,&f);*/

    
    return 0;
}
