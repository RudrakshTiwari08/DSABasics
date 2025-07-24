#include <bits/stdc++.h>
using namespace std;
int main()
{
    string num1;
    string num2;
    cin >> num1;
    cin >> num2;
    string result;

    for (int i = 0; i < num1.size(); i++) {
        if (num1[i] != num2[i]) {
            result += '1';
        } else {
            result += '0';
        }
    }

    cout<<result;
    return 0;
}