#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    set < char > st;
    
    int j=0;
  
    cin>>s;
      int n =s.size();
    while(j<n){
     st.insert(s[j]);
     j++;
    }

    
    int h=st.size();
    if(h%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
    return 0;

}