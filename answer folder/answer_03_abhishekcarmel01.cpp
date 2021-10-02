#include <iostream>
using namespace std;

int main() {
	int a,b=0,t;
    cin>>t;
    for(int j=0;j<t;j++){
    
    cin>>a;
    b=0;
    for(int i=0;a>0;i++){
        b=b*10+a%10;
        a=a/10;
    }
    cout<<b<<"\n";}
}

