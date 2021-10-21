#include<iostream>
#include<cmath>
using namespace std;

#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, count=0;
        cin>>n;
        while(n){
            n -= int(sqrt(n))*int(sqrt(n));
            count++;
            // cout<<n<<" ";
        }
        cout<<count<<"\n";
    }   
    return 0;
}