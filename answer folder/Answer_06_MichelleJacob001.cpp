#include<bits/stdc++.h>

using namespace std;
int main(){
    int t=1; 
    cin>>t;
    while(t--){
        int notes = {100,50,10,5,2,1};  //using a note array in descending order
        int N;
        cin>>N;
        int count =0, i=0;
        while(N!=0){
            count += (N/notes[i]);  //to keep the count of notes from each iteration
            N = N % notes[i];       //Update N to the remainder left after count updation
            i++;
        }
        cout<<count<<endl;          //Print the total no. of notes 
    }
}
