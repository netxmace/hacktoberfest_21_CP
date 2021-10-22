#include<stdio.h>
int main()
{
    int N1,N2,diff,sum;
    printf("enter the first number:\n");
    scanf("%d",&N1);
    printf("enter the second number:\n");
    scanf("%d",&N2);
    if(N1>N2)
    {
        diff=N1-N2;
        printf("Difference:%d",diff);

    }
    else
    {
        sum=N1+N2;
        printf("sum:%d",sum);
    }
    return 0;
    }
