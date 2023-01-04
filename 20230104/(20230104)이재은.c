#include <stdio.h>

int main (void)
{
    int i;
    int id=0;
    int ps=0;
    int id1 = 1234;
    int ps1 = 5678;     
    int a;
    int balance = 100000;
    int amount;
  

    printf("oo은행에 오신거를 환영합니다.\n");
    for(i=0;i<5;i++)
    {   
        id:
        printf("아이디를 입력하세요: \n");
        scanf("%d",&id);   
        if(id != id1)
        {
            printf("아이디가 틀렸습니다. 다시 입력하세요.\n");
            goto id;
        }
        else 
        {
            printf("맞았습니다.\n");
            goto pass;
        }
        pass:
        printf("비밀번호를 입력하세요: \n");
        scanf("%d",&ps);
        if(ps != ps1)
        {
            printf("비밀번호가 틀렸습니다. 다시 입력하세요.\n");    
            goto pass;
        }
        else
        {
            printf("맞았습니다.\n");
            goto bank;
        }
    }
    bank:
    printf("00은행에 접속합니다.\n");
    printf("메뉴를 선택하시오.\n");
    printf("1.입금 2.출금 3.종료 \n");
    scanf("%d",&a);
    
    if(a == 1)
    {
        printf("입금할 금액을 입력하시오. (보유금액: %d)\n", balance);
        scanf("%d",&amount);
        balance += amount;
        printf("입금 후 잔액은: %d 입니다.\n",balance);
    }
    else if(a == 2)
    {
        printf("출금할 금액을 입력하시오. (보유금액: %d)\n", balance);
        scanf("%d",&amount);
        if(amount>balance)
        {
            printf("출금 금액이 보유금액보다 많습니다. \n");
        }
        else
        {
            balance-=amount;
             printf("출금 후 잔액은 %d 입니다. \n",balance);
            goto bank;
        }    
    }
    else if(a == 3)
    {
        printf("프로그램을 종료합니다.\n 이용해 주셔가지고 감사합니다. \n 보유 금액: %d \n",balance);
    }
    return 0;
}

    
    
    
    

    







