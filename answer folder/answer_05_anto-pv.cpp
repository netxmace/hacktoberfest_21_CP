#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,ans=0;cin>>n;
    if(n%100){
        ans+= n/100;
        n=n%100;
        if(n%50){
            ans+= n/50;
            n=n%50;
            if(n%10){
                ans+= n/10;
                n=n%10;
                if(n%5){
                    ans+= n/5;
                    n=n%5;
                    if(n%2){
                        ans+= n/2;
                        ans+=n%2;
                    }
                    else
                        ans+=n/2;
                }
                else
                    ans+=n/10;
            }
            else
                ans+=n/10;
        }
        else
            ans+=n/50;
    }
    else
        ans+=n/100;
    cout<<ans<<"\n";
}

int main() {
    int t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}