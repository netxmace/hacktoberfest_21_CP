#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,ans=0,anr=0;cin>>n;
    vector<int> l(n),r(n);
    for(int i=0; i<n;  i++)
        cin>>l[i];
    for(int i=0; i<n;  i++)
        cin>>r[i];
    for(int i=0; i<n;  i++){
        l[i]*=r[i];
        if(l[i]>=ans){
            if(l[i]==ans && r[i]<=r[anr])
                continue;
            else{
                ans=l[i];
                anr=i;
            }
        }
    }
    
    cout<<anr+1<<"\n";
}

int main() {
    int t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
