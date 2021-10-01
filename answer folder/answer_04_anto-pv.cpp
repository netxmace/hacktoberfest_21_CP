#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k,ans=0;cin>>n;
    while(n>0){
        k=sqrt(n);
        n=n-(k*k);
        ans++;
    }
    cout <<ans<<"\n";
}

int main() {
    int t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}