#include<iostream>
using namespace std;

int main()
{   int n,r,nr=0;
    cin>>n;
    while(n>0)
    {   r=n%10;
        nr=(nr*10)+r;
        n=n/10;
    }
    cout<<nr;
    return 0;
}