#include <bits/stdc++.h>
using namespace std;

int main()
{
    int lvl;
    cin >> lvl;

    int x;
    cin >> x ;

    int arr[x];
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }
    int y;
    cin >> y;
    int arrr[y];
    for (int i = 0; i < y; i++)
    {
        cin >> arrr[i];
    }

    set<int> s;

    for (int i = 0; i < x; i++)
    {
        s.insert(arr[i]);
    }
    for (int i = 0; i < y; i++)
    {
        s.insert(arrr[i]);
    }

    if (s.size() == lvl)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }
}