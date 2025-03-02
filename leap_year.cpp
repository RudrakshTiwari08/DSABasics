#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the year to check if it is a leap year";
    cin >> n;

    if (n % 4 == 0)
    {
        if (n % 100 == 0)
        {
            if (n % 400 == 0)
            {
                cout << "it's a leap year";
            }
            else{
                cout<<"it is not a leap year";
            }
        }
        else
        {
            cout<<"it is a leap year";
        }
    }
    else
    {
        cout << "it isn't a leap year";
    }
}