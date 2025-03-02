#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int LCM = 0;
    int HCF = 0;

    cout << "enter the two numbers you want toget LCM of;" << endl;
    cin >> a;
    cin >> b;

    int small = min(a, b);
    for (int i = 1; i <= small; i++)
    {
        if (a % i == 0 && b % i == 0)

        {
            HCF = i;
        }
    }
    LCM = (a * b) / HCF;
    cout << LCM;
    return 0;
}