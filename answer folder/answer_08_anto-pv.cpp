#include <bits/stdc++.h>
using namespace std;
unordered_map <char,int> d={{'E',1},{'Q',1},{'U',1},{'I',1},{'N',1},{'O',1},{'X',1}};
void solve(){
   int n,a,b,sar=0,anu=0;cin>>n>>a>>b;
   string s;
   for(int i=0; i<n; i++){
    cin>>s;
    if(d[s[0]])
        sar+=a;
    else
        anu+=b;
   }
   if(sar>=anu)
        if(sar==anu)
            cout<<"DRAW\n";
        else
            cout<<"SARTHAK\n";
    else
        cout<<"ANURADHA\n";
}

int main() {
    int t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}