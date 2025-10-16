#include <bits/stdc++.h>
using namespace std;        

int main(){
    string s , t;
    cin>>s>>t;
    int n = s.size();
    int m = t.size();
    reverse(s.begin(),s.end());


            if(s == t){
                cout<<"YES"<<endl;
                return 0;
            }
            else{
                cout<<"NO"<<endl;
                return 0;
            }
    return 0;
} 