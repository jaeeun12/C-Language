#include <stdio.h> 

int main(void)
{                                                                //0x10    16진수
    int i = 0x10;                                               //010 8진수         //주소 연산자
    char c = 97;                                               //아스키 코드 
    double f = 12.3; 
    
    printf("i의 주소: %u 값: %d \n",&i,i);
    printf("c의 주소: %u 값: %c \n",&c,c);
    printf("f의 주소: %u 값: %lf \n",&f,f);
    
    return 0;
}
