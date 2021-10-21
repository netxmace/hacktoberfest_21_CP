#include <iostream>
using namespace std;

int main() {
    int t,a,b,c,d,flag=0;
	cin>>t;
    for(int i=0;i<t;i++){
        flag=0;
        cin>>a>>b>>c>>d;
        if(a+c==180)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}

