#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t>0) {
        int x;
        int n ; 
        cin>>x;
        cin>>n;

        if(n%2==0){
            cout<<"0"<<endl;
        }
        else{
            cout<<x<<endl;
        }
       t--;
    }
    return 0;
}
