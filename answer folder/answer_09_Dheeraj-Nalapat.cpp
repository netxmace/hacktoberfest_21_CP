#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,a,b;
	    cin>>n>>a>>b;
	    int total=2*(180+n)-a-b;
	    cout<<total<<"\n";
	}
	return 0;
}
