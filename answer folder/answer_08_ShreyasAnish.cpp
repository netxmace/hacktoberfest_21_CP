#include <iostream>
using namespace std;

int main()
{   int t,n,a,b,sar=0,anu=0;
    cin>>t;
    char s[20];
    while(t>0)
    {   cin>>n>>a>>b;
        while(n>0)
        {   cin>>s;
            if(s[0]=='E'||s[0]=='Q'||s[0]=='U'||s[0]=='I'||s[0]=='N'||s[0]=='O'||s[0]=='X')
            sar+=a;
            else
            anu+=b;
            n--;
        }
        if(sar>anu)
        printf("SARTHAK\n");
        else if(anu>sar)
        printf("ANURADHA\n");
        else
        printf("DRAW\n");
        t--;
    }
    return 0;
}
