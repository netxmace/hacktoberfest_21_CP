#include<iostream>
using namespace std;
int main()
{

    int N1,N2;
    int result;
 
    cout<<"Enter first number: ";
    cin>>N1;
    cout<<"Enter second number: ";
    cin>>N2; 
    if( N1>N2 )
        result=N1-N2;
    else
        result=N1+N2;
    cout<<result;
    return 0;
}
