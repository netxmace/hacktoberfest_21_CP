#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    char eq[8] = "EQUINOX";
    while(t--){
        long long int n, a, b, scorea=0, scoreb=0;
        string s;
        bool flag = false;
        cin>>n>>a>>b;
        while(n--){
            flag = false;
            cin>>s;
            for(long int j=0;j<7;j++)
                if(s[0] == eq[j])
                    flag = true;
            if(flag)
                scorea +=a;
            else
                scoreb +=b;
        }
        cout<<(scorea==scoreb?"DRAW":(scorea>scoreb?"SARTHAK":"ANURADHA"))<<"\n";
    }
    return 0;
}
