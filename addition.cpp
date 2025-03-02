#include <iostream>
using namespace std;
int main()
{
    int a;
    int addition = 0;
    cout << "enter the number which u want to add";
    cin >> a;

    while (a > 0)
    {
        addition = addition + a;
        a--;
    }

    cout << addition << endl;
    return 0;
}