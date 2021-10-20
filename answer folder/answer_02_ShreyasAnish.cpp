#include<iostream>
using namespace std;

int main()
{   int n,d1;
    cin>>n;
    int d2=n%10;
    while(n>0)
    {   d1=n%10;
        n=n/10;
    }
    cout<<(d1+d2);
    return 0;
}