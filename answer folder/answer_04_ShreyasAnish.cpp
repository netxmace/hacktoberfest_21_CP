#include<iostream>
#include<cmath>
using namespace std;

int main()
{   int n,t,s;
    cin>>t;
    while(t>0)
    {   cin>>n;
        int f=0;
        while(n>0)
        {   s=floor(sqrt(n));
            n-=(s*s);
            f++;
        }
        cout<<f<<endl;
        t--;
    }
    return 0;
}