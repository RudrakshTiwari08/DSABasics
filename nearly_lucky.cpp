#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;

    // Count the lucky digits (4 and 7) in the number
    while (n > 0)
    {
        int digit = n % 10; // Get the last digit
        if (digit == 4 || digit == 7)
        {
            count++;
        }
        n /= 10; // Remove the last digit
    }

    // Check if the count of lucky digits is a lucky number
    if (count == 4 || count == 7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
