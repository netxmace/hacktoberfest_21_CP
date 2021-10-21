#include <iostream>
#include <cmath>
using namespace std;

int order(long int x){
    int res=0;
    while(x){
        x = x/10;
        res++;
    }
    return res;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    long int x;
	    cin>>x;
	    int n= order(x);
	    int temp,res=0;
	    for(int i=0;i<=n;i++){
	        temp= x/pow(10,n-i);
	        x -= temp*pow(10,n-i);
	        res += pow(10,i-1)*temp;
	    }
	    cout<<res<<"\n";
	}
	return 0;
}
