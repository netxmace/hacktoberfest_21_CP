#include<iostream>
#include<cmath>
using namespace std;

#define ll long long

int main(){

    ll deno[] = {100, 50, 10, 5, 2, 1};


    ll t;
    cin>>t;
    while(t--){
        ll n, notes=0, i=0;
        cin>>n;
        while(n){
            notes += n/deno[i];
            n = n%deno[i];
            i++;
        }
        cout<<notes<<"\n";
    }   
    return 0;
}