#include <bits/stdc++.h>
using namespace std;

int main()
{

    int i = 0;
    int count = 0;
    string s;
    int n;
    cin >> n;
    cin >> s;

    while (i < n)
    {
        if (s[i] == s[i + 1])
        {
            count++;
        }

        i++;
    }
    cout<<count;
    return 0;
}