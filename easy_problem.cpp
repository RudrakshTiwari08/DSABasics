#include <bits/stdc++.h>
using namespace std;        

int main(){
    int n ;
    cin>>n;
    int vector[n];
    for (int i = 0; i < n; i++){
        cin>>vector[i];
    }

    for (int i = 0; i < n ; i++)
    {
       if( vector[i] == 1){
        cout<<"HARD"<<endl;
        return 0;
       }
       
    }

    cout<<"EASY"<<endl;
    return 0;
}