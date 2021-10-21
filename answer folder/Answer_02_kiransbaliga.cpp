#include <iostream>
using namespace std;
int main()
{
    int t,n[1000000],f,l,i,j[1000000];
    cout<<"Enter number of test cases \n";
    cin>>t;
    cout<<"Enter numbers \n";
    while(t<=1000 && t>=1){
        for(i=0;i<t;i++){
            cin>>n[i];
            f=n[i];
            l=f%10;
            while(f>=10){
                f=f/10;
            }
            j[i]=l+f;
        }
    cout<<"\n"<<"sum"<<"\n";
    for(i=0;i<t;i++){
    cout<<j[i]<<"\n";
    }
    }
    return 0;
}
