#include <iostream>
#include <cmath>
using namespace std;

int iszero(long int arr[],int n){
    int res=0,t;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            res++;
        }
    }
    if(res>0){
        t=0;
    }
    else{
        t=1;
    }
    return t;
}

int converttozero(int n,long int a[],int k){
    int res=0,t=0,j=0;
    t=iszero(a,n);
    while(t!=1){
        int r=pow(2,j);
        int flag=0;
        int count=0;
        for(int i=0;i<n;i++){
            if(a[i]!=0 && a[i]&r){
                a[i]^=r;
                flag+=1;
                count++;
            }
        }
        if(count%k==0){
            count = count/k;
        }
        else{
            count =(count/k)+1;
        }
        res+=count;
        j++;
        t=iszero(a,n);  
    }
    return res;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    long int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int res=converttozero(n,a,k);
	    cout<<res<<"\n";
	}
	return 0;
}
