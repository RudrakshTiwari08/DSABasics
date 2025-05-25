#include <bits/stdc++.h>
using namespace std;

int main() {
    string n;
    cin >> n;  // Read input as string

    int count = 0;
    for (int i = 0; i < n.size(); ++i) {
        char digit = n[i];
        if (digit == '4' || digit == '7') {
            count++;
        }
    }

   

    if (count == 4 || count == 7) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}

