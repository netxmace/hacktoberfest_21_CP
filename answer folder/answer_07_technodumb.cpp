#include<iostream>
using namespace std;

#define ll long long

int main(){
    ll t; cin>>t; while(t--){
        ll a, b, c, d;
        cin>>a>>b>>c>>d;
        if(a+c==180) cout<<"YES\n";
        else cout<<"NO\n";
    }   
    return 0;
}