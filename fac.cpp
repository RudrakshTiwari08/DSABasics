#include <iostream>
using namespace std;
int main()
{
    int a;
    int fac = 1;
    cout << "enter the factorial no.";
    cin >> a;
    while (a > 0)
    {
        fac = fac * a;
        a--;
    }
    cout << fac << endl;
    return 0;
}