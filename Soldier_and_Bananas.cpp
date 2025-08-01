#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, n, w;
    cin >> k >> n >> w;

    int sum = 0;

    for (int i = 1; i <= w; i++) {
        sum += i * k;
    }

    int ans = sum - n;

    if (ans < 0) ans = 0;

    cout << ans;
    return 0;
}
