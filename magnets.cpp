#include <bits/stdc++.h>
using namespace std;    

int main(){

    int n ;
    cin>>n;
    vector<int> magnets(n);
    for(int i=0;i<n;i++){
        cin>>magnets[i];
    }   

    int count=1;
    for(int i=1;i<n;i++){
        if(magnets[i]!=magnets[i-1]){
            count++;
        }
    }   

    cout<<count<<endl;
    return 0;   


}