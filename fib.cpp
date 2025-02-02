#include <iostream>
using namespace std;
int main()
{
    int a = 0;
    int b = 1;
    int c;
    int n;
    int i = 0;
    cout << "enter how many number u want" << endl;
    cin >> n;
    cout << a << endl;
    cout << b << endl;

    while (i < (n - 2))
    {
        c = a + b;
        cout << c<<endl;
        a = b;
        b = c;
        i++;
    }

    return 0;
}
