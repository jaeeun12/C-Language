#include <stdio.h>


int init_ary(int a[5][5])
{
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            a[i][j] = 0;
        }
    }
}    

int init_ay(int b[5][5],int a[5][5])                  
{
	for(int i=0; i<5; i++)
	{
		printf("\n");
		for(int j=0; j<5; j++)
		{
			a[i][j]=b[i][j];
			printf("%3d", a[i][j]);
		}
	}
	printf("\n");
}    
int printf_ay(int a[5][5],int b[5][5])            
{
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
			b[(i+1)%5][(j+1)%5]=a[i][j];
	}
}
int reinit_ary(int a[5][5])                  
{
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            a[i][j] = 7;                                                                                   
        }     
    }
}


int main()
{
    int a[5][5]; 
    int b[5][5];
    
    init_ary(a);                         
    reinit_ary(a);
    

    for(int i=0; i<=5; i++)
	{
        init_ay(a,b);
        printf_ay(a,b);

	}
	return 0;
}
