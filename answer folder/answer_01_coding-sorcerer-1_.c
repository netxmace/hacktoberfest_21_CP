#include <stdio.h>

int main()   
{
   int a,b,sum,diff;
   printf("Enter first number\t");
   scanf("%d",&a);
   printf("Enter second number\t");
    scanf("%d",&b);
    
    if(a>b)
    {
        diff=a-b;
        printf("Difference of the numbers is %d",diff);
    }
    else if(b>a)
    {
        sum=a+b;
         printf("Sum of the numbers is %d",sum);
    }
    else
    {
        printf("Please enter different numbers");
    }
    
    return 0;
}
