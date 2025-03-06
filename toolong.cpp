#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){

    string s;
    
    int t;
    cin>>t;
    while(t>0){
    cin>>s;
    int pp=s.size()-1;
    int a = s.size()-2;
    if(pp>=10){
    cout<<s[0]<<a<<s[s.size()-1]<<endl;
    }
    else{
        cout<<s<<endl;
    }
    t--;
    }
    return 0;
    
}