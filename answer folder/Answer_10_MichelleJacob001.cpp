#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    long int n,a,b;
	    cin>>n>>a>>b;
	    string s;
	    long int count=0,anu=0,swar=0;
	    for(int i=0;i<n;i++){
	        cin>>s;
	        count=0;
	        if(s[0]=='E'){
	            count++;
	        }
	        else if(s[0]=='Q'){
	            count++;
	        }
	        else if(s[0]=='U'){
	            count++;
	        }
	        else if(s[0]=='N'){
	            count++;
	        }
	        else if(s[0]=='I'){
	            count++;
	        }
	        else if(s[0]=='X'){
	            count++;
	        }
	         else if(s[0]=='O'){
	            count++;
	         }
	        if(count>0){
	            swar += a; 
	        }
	         else{
	            anu += b; 
	        }
	    }
	    if(swar>anu){
	    cout<<"SARTHAK"<<endl;
	    }
	    else if(swar==anu){
	        cout<<"DRAW"<<endl;
	    }
	    else{
	        cout<<"ANURADHA"<<endl;
	    }
	}
	return 0;
}
