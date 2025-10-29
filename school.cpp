#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    if (!(cin >> n >> t)) return 0;
    string s;
    cin >> s;

    while (t--) {
        for (int i = 0; i + 1 < n; ++i) {
            if (s[i] == 'B' && s[i+1] == 'G') {
                swap(s[i], s[i+1]);
                ++i; // skip next position, because the boy already moved
            }
        }
    }

    cout << s << '\n';
    return 0;
}
