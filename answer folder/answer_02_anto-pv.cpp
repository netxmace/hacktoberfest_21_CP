#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main() {
    int a,f,l,t;cin >>t;
    while(t--){
        cin>>a;
        l=a%10;
        string s= to_string(a);
        f= a/(pow(10,s.size()-1));
        cout<<l+f<<"\n";
    }
    return 0;
}