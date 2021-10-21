#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long int n,a,b;
	    cin>>n>>a>>b;
	    string s;
	    long int co=0,anu=0,swa=0;
	    for(int i=0;i<n;i++){
	        cin>>s;
	        count=0;
	        if(s[0]=='E'){
	            co++;
	        }
	        else if(s[0]=='Q'){
	            co++;
	        }
	        else if(s[0]=='U'){
	            co++;
	        }
	        else if(s[0]=='N'){
	            co++;
	        }
	        else if(s[0]=='I'){
	            co++;
	        }
	        else if(s[0]=='X'){
	            co++;
	        }
	         else if(s[0]=='O'){
	            co++;
	         }
	        if(co>0){
	            swa += a; 
	        }
	         else{
	            anu += b; 
	        }
	    }
	    if(swa>anu){
	    cout<<"SARTHAK"<<endl;
	    }
	    else if(swa==anu){
	        cout<<"DRAW"<<endl;
	    }
	    else{
	        cout<<"ANURADHA"<<endl;
	    }
	}
	return 0;
}
