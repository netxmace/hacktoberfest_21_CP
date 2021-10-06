#include <iostream>
using namespace std;

int main() {
	int a,b,sum,t;
    cin>>t;
  
    for(int j=0;j<t;j++){
   
      cin>>a;
      b=a;
      sum=b%10;
    
    for(int i=0;a>10;a++){
        
      a=a/10;
    }
    
    sum=sum+a-1;
    if(b<10){
        
      cout<<b<<"\n";
    }
    else  
      cout<<sum<<"\n";}
}
