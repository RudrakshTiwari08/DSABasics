#include <bits/stdc++.h>
using namespace std;
int main()
{
   
    int t; // no. of frnds
    cin >> t;
     int max_h; // maxm height
    cin>>max_h;
    int a; // height if each frnd
    int count = 0 ; // minimum width
    while (t > 0){
       cin>>a;
       if( a>max_h){
        count +=2;
       }
       else{
        count++;
       }
        t--;


    }
   cout<<count;
    return 0;
}