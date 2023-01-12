#include <stdio.h>                      //기돈이 코드 참고함                           
#include <stdlib.h>
#include <time.h>
#define x1 5
#define y1 5

int in_ary(int a[x1][y1])               //a초기화 
{
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            a[i][j] = 0;
        }
    }
}

int printf_ay(int a[x1][y1])         //a랜덤출력     
{
        for(int i = 0; i < 5; i++)               
    {
        for(int j = 0; j < 5; j++)
        {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }  
}
int in_ay(int b[x1][y1])               //b초기화 
{
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            b[i][j] = 0;
        }
    }
}

int printf_a(int b[x1][y1])         //b출력     
{
    printf("\n");
        for(int i = 0; i < 5; i++)               
    {
        for(int j = 0; j < 5; j++)
        {
            printf("%3d", b[i][j]);
        }
        printf("\n");
    }  
}
int set_data(int a[x1][y1])        
{
    int cont = 1;
    while(cont<25)
    {
        int x = rand()%5;
        int y = rand()%5;
        if(a[x][y] == 0)
        {
            a[x][y] = cont++;
        }
    }
}
int checkBoard(int b[x1][y1])
{
    int sum, count, ROW, COL = 0;
    for (int i = 0; i < ROW; i++)
    {
        sum = 0;
        for (int j = 0; j < COL; j++)
        {
            sum += b[i][j];
        }
        if (sum == 0)
            count++;
    }
    for (int j = 0; j < COL; j++)
    {
        sum = 0;
        for (int i = 0; i < ROW; i++)
        {
            sum += b[i][j];
        }
        if (sum == 0)
            count++;
    }
    sum = 0;
    for (int i = 0; i < ROW; i++)
    {
        sum += b[i][i]; 
    }
    if (sum == 0)
        count++;
    sum = 0;
    for (int i = 0; i < ROW; i++)
    {
        sum += b[i][4-i];
    }
    if (sum == 0)
        count++;

    return count;
}

int main(void)
{
    int a[x1][y1] = {0};
    int b[x1][y1] = {0};
    int sum, count, ROW, COL = 0;
    srand((unsigned)time(NULL));   
    

    int cont = 1;
    while(cont<25)
    {    
        in_ary(a);
        in_ay(b);
        set_data(a);
        printf_ay(a);
        printf_a(b);
        
        printf("숫자를 입력하시오\n");
        scanf("%d",&sum);
        int x = rand()%5;
        int y = rand()%5;
        if(a[x][y] == 0)
        {
            a[x][y] = cont++;
        }    
        if(count == 3)
            checkBoard(b);
    }

    

    return 0;
}
