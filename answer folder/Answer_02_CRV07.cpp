#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main() {
    int a,b,c,d;cin >>d;
    while(d--){
        cin>>a;
        c=a%10;
        string s= to_string(a);
        b= a/(pow(10,s.size()-1));
        cout<<c+b<<"\n";
    }
    return 0;
}
