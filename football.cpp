#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int total = 1; // count starts from 1

    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            total++;
        }
        else
        {
            total = 1; // reset count
        }

        if (total >= 7)
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}