#include <bits/stdc++.h>
using namespace std;

int main() {
    string operation;
    int ans = 0; 
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> operation; 
       
        if (operation == "x++" || operation == "++x") {
            ans++;
        } else if (operation == "x--" || operation == "--x") {
            ans--;
        }
    }

    cout << ans;
    return 0;
}
