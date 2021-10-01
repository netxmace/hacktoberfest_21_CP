#include <iostream> 
#include <math.h>
using namespace std;

int main() 
{
    int t;
    cin >>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        while(n>0)
        {int a=sqrt(n);
        int b=a*a;
        int c=n-b;
        n=c;
            count++;
        }
        cout << count << endl;
    }
	

	return 0;
}
