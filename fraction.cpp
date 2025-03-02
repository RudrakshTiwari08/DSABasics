#include <iostream>
using namespace std;
int main()
{
    int num1, den1, num2, den2, add = 0, LCM = 0, HCF = 0;
    cout << "enter the numerator of first number " << endl;
    cin >> num1;
    cout << "enter the denominator of first number" << endl;
    cin >> den1;
    cout << "enter the numerator of second number" << endl;
    cin >> num2;
    cout << "enter the denominator of second number" << endl;
    cin >> den2;

    int small = min(den1, den2);
    for (int i = 1; i <= small; i++)
    {
        if (den1 % i == 0 && den2 % i == 0)

        {
            HCF = i;
        }
    }
    LCM = (den1 * den2) / HCF;

    int sum = (LCM / den1) * num1 + (LCM / den2) * num2;

    cout<<"the addition of two fraction number is"<<sum<<"/"<<LCM;
        return 0;
}

 /*enter the numerator of first number 
4
enter the denominator of first number
3
enter the numerator of second number
7
enter the denominator of second number
6
the addition of two fraction number is15/6 */