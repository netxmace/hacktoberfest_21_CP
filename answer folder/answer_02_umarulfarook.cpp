#include<bits/stdc++.h>
using namespace std;
int main(){
    int t=1; 
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n = s.size();
        cout<< (int)(s[0]+s[n-1]-96)<<endl;
    }
  return 0;
}
