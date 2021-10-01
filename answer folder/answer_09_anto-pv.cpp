#include <bits/stdc++.h>
using namespace std;
unordered_map <char,int> d={{'E',1},{'Q',1},{'U',1},{'I',1},{'N',1},{'O',1},{'X',1}};
void solve(){
   int n,a,b,ans=0;cin>>n>>a>>b;
   ans=2*(180+n)-a-b;
   cout<<ans<<"\n";
}

int main() {
    int t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}