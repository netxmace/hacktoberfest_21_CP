#include <stdio.h>
int main()
{
    int a[1000],b,rem;
    printf("Enter total number of  testcases :\n");
    scanf("%d",&b);
     printf("Enter the testcases one by one :\n");
    for(int i=0;i<b;i++)
    {
       scanf("%d",&a[i]);
    }

printf("Reverse of the numbers are :\n");
    for(int j=0;j<b;j++)
    {
       
       int rev=0;
        while (a[j]!=0)
        {
            rem=a[j]%10;
            rev=rev*10+rem;
            a[j]=a[j]/10;
        }
      
        printf("%d \n",rev);
        
    }
  
    return 0;
}
