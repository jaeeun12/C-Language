#include <stdio.h>
#include <stdio.h>
#include <time.h>
#define x 10
#define y 10

void in_ary(int a[x][y])
{
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            a[i][j] = 0;
        }
    }
}
void init_ary(int b[x][y])                
{
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            b[i][j] = 0;
        }
    }
}  

int main(void)
{
    srand((unsigned)time(NULL));
    int a[x][y];
    int b[x][y];
    
    in_ary(a);
    init_ary(b);
    
    for(int i=0;i<100;i++)
        set_data(a,b);
    
    printf_ay(a);
    printf_ary(b);
    
    return 0;
    
    
    
}

void set_data(int a[x][y],int b[x][y])
{
    int t=0,j=0;
    
    t=rand()%10;
    j=rand()%10;
    a[t][j]=rand()%100;
    b[t][j]++;
}
void printf_ay(int a[x][y])            
{
        for(int i = 0; i < 10; i++)                  
    {
        for(int j = 0; j < 10; j++)
        {
            printf("%3d", a[i][j]);
        }
        printf("\n");
    }  
}
void printf_ary(int b[x][y])           
{
        for(int i = 0; i < 10; i++)                  
    {
        for(int j = 0; j < 10; j++)
        {
            printf("%3d", b[i][j]);
        }
        printf("\n");
    }  
}