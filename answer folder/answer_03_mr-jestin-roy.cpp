#include<bits/stdc++.h>

using namespace std;
int main(){
    int t=1; 
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        reverse(s.begin(),s.end());
        cout<<s<<endl;
    }
}