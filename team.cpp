#include <bits/stdc++.h>
using namespace std;
int main(){
    int P;
    int V;
    int T;
    int count=0;


    int t;
    cin>>t;
    while(t>0){
        cin>>P>>V>>T;
   
        int sure = P + V + T;

        if (sure >= 2) {
            count++;
        }
        t--;
    }
    cout<<count;
return 0;

}