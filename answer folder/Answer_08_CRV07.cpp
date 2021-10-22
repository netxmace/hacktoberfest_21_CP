#include <iostream>
using namespace std;

int main()
 {
	string s;
	int a,b,c,d;
	cin>>a;
	while(a-- >0)
	{
	    cin>>b>>c>>d;
	    long int e=0,f=0;
	    for(int i=0;i<b;i++)
	    {
	        cin>>s;
	        if(s[0]=='E' || s[0]=='Q' || s[0]== 'U' || s[0]=='I' || s[0]=='N' || s[0]=='O' || s[0]=='X')
	        {
	           e=c+e;
	        }
	        else
	        {
	           f=d+f;
            }
	    }
	    if(e>f)
	    {
	        cout<<"SARTHAK"<<"\n";
	    }
	    else if(e==f)
	    {
	        cout<<"DRAW"<<"\n";
	    }
	    else
	    {
	        cout<<"ANURADHA"<<"\n";
	    }
	}
	return 0;
}
