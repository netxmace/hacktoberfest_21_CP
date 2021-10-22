//vishnu 
#include<iostream>
#include<map>
#include<cmath>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    long long int t;
    cin>>t;
    while(t--){
        long long int n, inp, tot=0, num;
        float k;
        map<long long int,long long int> binsums;
        cin>>n>>k;
        for(int i=0;i<n; i++){
            cin>>num;
            long long int j=0;
            while(num){
                binsums[j++]+= num&1;
                num = num>>1;
            }
        }
        for(auto i = binsums.begin(); i != binsums.end(); i++){
            tot += ceil(i->second/k);
        }
        cout<<tot<<"\n";
    }
    return 0;
}
