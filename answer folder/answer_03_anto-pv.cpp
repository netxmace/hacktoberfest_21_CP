#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,t;cin >>t;
    while(t--){
        cin>>a;
        while(!(a%10)){
            a=a/10;
        }
        string s= to_string(a);
        reverse(s.begin(), s.end());
        cout<<s<<"\n";
    }
    return 0;
}