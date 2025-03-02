#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        cout << "enter the numbers" << endl;
        cin >> arr[i] ;
    }

    for (int i = 9; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
