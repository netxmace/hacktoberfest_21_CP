#include <bits/stdc++.h>
using namespace std;

void solve(){
   int a,b,c,d;cin>>a>>b>>c>>d;
   if(a+c==180 && b+d==180)
    cout<<"YES\n";
    else
        cout<<"NO\n";
}

int main() {
    int t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}