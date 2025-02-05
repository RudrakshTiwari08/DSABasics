#include <iostream>
using namespace std;
int main()
{
    int n;
    int count=0;
    cout << "enter thr number" << endl;
    cin >> n;

  for (size_t i = n; i>0; i = i/10)
  {
    count++;
  }
  cout<<count;
  
}