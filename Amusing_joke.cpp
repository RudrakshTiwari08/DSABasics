#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string ss;
    cin>>ss;
    string c;
    cin>>c;

    unordered_map<char, int> mp;
    unordered_map<char, int> mp2;
    int n = s.size();
    int m = ss.size();
    int o = c.size();

    for (int i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }
    
    for (int i = 0; i < m; i++)
    {
        mp[ss[i]]++;
    }

     for (int i = 0; i < o; i++)
    {
        mp2[c[i]]++;
    }
    bool equal = false ;

    if(mp.size() != mp2.size()){
        equal = false ;
    }
    else{
        for (auto it = mp.begin(); it != mp.end(); it++)
        {
            if(mp2.find(it->first) == mp2.end() || mp2[it->first] != it->second){
                equal = false ;
                break;
            }
            else{
                equal = true ;
            }
        }
    }

    if(equal){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    // for (auto it = mp.begin(); it != mp.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }

    return 0;
}