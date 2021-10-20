#include<iostream>
using namespace std;

#define ll long long

int main(){
    ll t; cin>>t; while(t--){
        ll n; 
        cin>>n;
        ll l[100], r[100], maxs=0, maxr=0, maxind=0;
        for(int i=0; i<n; i++) cin>>l[i];
        for(int i=0; i<n; i++){
            cin>>r[i];
            if(l[i]*r[i]>=maxs && r[i]>maxr){
                maxs = l[i]*r[i];
                maxr = r[i];
                maxind = i;
            }
        }        
        cout<<maxind + 1<<"\n";
    }   
    return 0;
}
