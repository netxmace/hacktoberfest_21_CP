#include <iostream>
using namespace std;

int main() {
	int a,b,n,t,l[10],r[10],counter;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        for(int j=0;j<n;j++){
            cin>>l[j];
        }
        for(int k=0;k<n;k++){
            cin>>r[k];
        }
        a=l[0];
        b=r[0];
        counter=0;
        for(int m=1;m<n;m++){
            if((l[m]*r[m])>=a*b){
                if(r[m]>b){
                    counter=m;
                    a=l[m];
                    b=r[m];
                }
            }
        }
        cout<<counter+1<<"\n";
    }
}


