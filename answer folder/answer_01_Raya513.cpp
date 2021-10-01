#include <iostream>
using namespace std;


int main()
{
    int n1,n2,diff,sum;
    cout<<"Enter the values of N1 and N2 - "<<endl;
    cin>>n1>>n2;
    if(n1>n2)
    {
       diff=n1-n2;
       cout<<diff;
    }
    else{
        sum=n1+n2;
        cout<<sum;
    }

    return 0;
}
