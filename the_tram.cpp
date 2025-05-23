#include <bits/stdc++.h>
using namespace std;
int main()
{
    int I; // entering
    int O; // exiting
    int max =0; // seat required
    int ans=0;

    int t; // no. of stops 
    cin >> t;
    while (t > 0){
        cin>>O;
        cin>>I;

        ans= ans-O;
        ans= ans+I;

        if( max<ans){
            max= ans;
        }
        t--;


    }
    cout<<max;
    return 0;
}
