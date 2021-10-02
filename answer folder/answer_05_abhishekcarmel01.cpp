#include <iostream>
using namespace std;

int main() {
	int a,t,b,counter=0;
    cin>>t;
    for(int i=0;i<t;i++){
    cin>>a;
    b=a;
    while(b>=100){
        b=b-100;
        counter++;
    }
    while(b>=50){
        b=b-50;
        counter++;
    }
    while(b>=10){
        b=b-10;
        counter++;
    }
    while(b>=5){
        b=b-5;
        counter++;
    }
    while(b>=2){
        b=b-2;
        counter++;
    }
    while(b>=1){
        b=b-1;
        counter++;
    }
    cout<<counter<<"\n";
    counter=0;
    }
}