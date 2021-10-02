#include<bits/stdc++.h>

using namespace std;
int main(){
    int t=1; 
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int numberOfSquares =0;
        while(N>0){
            N = N - pow((int)(sqrt(N)),2);
            numberOfSquares++;
        }
        cout<<numberOfSquares<<endl;
    }
}