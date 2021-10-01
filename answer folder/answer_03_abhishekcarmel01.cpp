#include <iostream>
using namespace std;

int main() {
	int a,b=0;
    cin>>a;
    for(int i=0;a>0;i++){
        b=b*10+a%10;
        a=a/10;
    }
    cout<<b;
}

