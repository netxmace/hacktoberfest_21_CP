#include <iostream>
using namespace std;
int main()
{
    int t,n[100],f,l,i,j[100];
    cin>>t;
    while(t--){
        for(i=0;i<t;i++){
            cin>>n[i];
            f=n[i];
            l=f%10;
            while(f>=10)
                f=f/10;
            j[i]=l+f;
        }
    for(i=0;i<t;i++){
    cout<<j[i]<<"\n";
    }
    }
    return 0;
}
