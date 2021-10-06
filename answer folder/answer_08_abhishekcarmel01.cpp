#include<iostream>
using namespace std;
int main(){
    int n,t,a,b,s1,s2;
    char s[100];
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>a>>b;
        s1=0;
        s2=0;
        for(int j=0;j<n;j++){
            cin>>s;
            if((s[0]=='E')||(s[0]=='Q')||(s[0]=='U')||(s[0]=='I')||(s[0]=='N')||(s[0]=='O')||(s[0]=='X')){
                s1=s1+a;
            }
            else
                s2=s2+b;
        }
        if(s1>s2)
            cout<<"SARTHAK\n";
        else if(s2>s1)
            cout<<"ANURADHA\n";
        else
            cout<<"DRAW\n";
    }
}