#include <stdio.h>
/*int main(void)
{
    int i = 3000;                                   //예제 1번 
    int *p = NULL;

    p = &i;    
    
    printf("i = %d \n",i);
    printf("&i = %u\n\n",&i);
   
    printf("p = %u \n",p);
    printf("p = %d\n",*p);
    
    return 0;
}*/
int main(void)                     //예제 3번
{
    int i = 10;
    int *p;
    
    p = &i;
    printf("i = %d\n",i);
    
    *p = 20;
    printf("i = %d\n",i);
    
    return 0;
    
}