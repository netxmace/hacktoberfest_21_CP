#include <iostream>
using namespace std;
int main()
{
    int t,n[1000000],d,i,j[1000000],reverse,rem;
    cout<<"Enter number of test cases \n";
    cin>>t;
    cout<<"Enter numbers \n";
    while(t<=1000 && t>=1){
        for(i=0;i<t;i++){
            cin>>n[i]; 
            d=n[i];
            reverse=0;
            while(d!=0)    
             {    
            rem=d%10;
            reverse=reverse*10+rem;    
            d/=10;    
            }    
            j[i]=reverse;
        }
    cout<<"\n"<<"sum"<<"\n";
    for(i=0;i<t;i++){
    cout<<j[i]<<"\n";
    }
    }
    return 0;
}
  

