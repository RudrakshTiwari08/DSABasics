#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    int z;
    int y;
    if (x % 5 == 0)
    {
        z = x / 5;
        cout << z;
    }
    else
    {
        y = (x / 5) + 1;
        cout << y;
    }
}