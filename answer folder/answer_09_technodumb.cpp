#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        cout<<(360 + 2*n - (a+b))<<"\n";
    }
}