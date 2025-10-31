#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    long long ans;
    if (n % 2 == 0)
        ans = n / 2;
    else
        ans = - (n + 1) / 2;
    
    cout << ans << endl;
    return 0;
}
