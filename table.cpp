#include <iostream>
using namespace std;
int main()
{
    int i=1;
    int n;
    int multiplication = 1;
    cout << "write the number of which you need the table";
    cin >> n;

    while (i < 11)
    {
        multiplication = n*i;
        cout << multiplication << endl;
        i++;
    }
    return 0;
}