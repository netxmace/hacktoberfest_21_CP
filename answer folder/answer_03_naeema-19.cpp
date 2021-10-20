#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    { 
        long long int n,a,b,sum1=0,sum2=0;
        string s;
        cin>>n>>a>>b;
        for(int i=0;i<n;i++)
        {
            cin>>s;
           
                if(s[0]== 'E'|| s[0]== 'Q' || s[0]== 'U' || s[0]=='I'|| s[0]=='N' || s[0]== 'O'|| s[0]== 'X')
                {
                    sum1+=a;;
                    
                }
                else
                {
                    sum2+=b;
                }
            
            
            
        }
        if(sum1<sum2)
        {
            cout<<"ANURADHA"<<endl;
        }
        else if(sum1>sum2)
        {
            cout<<"SARTHAK"<<endl;
        }
        else 
        {
            cout<<"DRAW"<<endl;
            
        }
        
    }
}
