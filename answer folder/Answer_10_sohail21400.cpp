[1:57 PM, 10/8/2021] Naeema Ziyad (CSE): #include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int s;
    int n,k,c;
    while(t--)
    {
        
        cin>>n>>k;
        vector<int> a(n);
        for(int& i : a)
        {
            cin>>i;
        }
        vector<int> arr(31);
        int c;
        
        
        for(int j = 0 ; j <= 30 ; j++)
        {
            c = 0;
            for(int&i : a)
            {
                if(i%2!=0)
                {
                    c++;
                }
                i=i/2;
            }
            arr[j] = c;
        }
        s=0;
        for(int j=0; j<=30 ; j++)
        {
            
            if(arr[j]%k==0)
            {
                s=s+arr[j]/k;
            }
            else
            {
                s = s + arr[j]/k+1;
            }
        }
        cout<<s<<endl;
    }
    
    
    return 0;
}
[1:57 PM, 10/8/2021] Naeema Ziyad (CSE): answer_10_naeema-19.cpp
[1:57 PM, 10/8/2021] Naeema Ziyad (CSE): #include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if(a+c ==180 && b+d== 180)
	    {
	        cout<<"YES"<<endl;
	    }
	    else cout<<"NO"<<endl;
	}
	return 0;
}
