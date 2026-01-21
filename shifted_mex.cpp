#include <bits/stdc++.h>
using namespace std;    
int main(){


    int t;
     cin >> t;

    while (t--)
    {
        int n ;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int ans =0;
        for(int i = 0 ; i < n ; i++){
            int num = -a[i];

            vector<int>temp(n);
            for( int j = 0 ; j < n ; j++){
                temp[j] = a[j] + num;
            }

            sort(temp.begin() , temp.end());
            int miss = 0;
            for ( int k = 0 ; k < n ; k++){
                if( temp[k] == miss){
                    miss++;
                }
                else if( temp[k] > miss){
                    break;
                }
            }
            ans = max( ans , miss);
        }
        cout<<ans<<endl;
    }
    return 0;
}



