#include <bits/stdc++.h>
using namespace std;
int main()
{

  int a;
  int sum = 0;
  int count = 0;

  cout << "enter number";
  cin >> a;

  int n = a;

  while (a > 0)
  {
    count++;
    a = a / 10;
  }

  while (n > 0)
  {
    sum = sum + pow(n % 10, count);
    n = n / 10;
  }
  cout << sum << endl;
  return 0;
}