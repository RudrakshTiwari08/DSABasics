#include <iostream>
using namespace std;
int main()
{
    int a;
    int i = 1;
    int add = 0;
    cout << "how many even numbers you want to add";
    cin >> a;

    while (i <= a)
    {
        if (i % 2 == 0)
        {
            add = add + i;
        }
        i++;
    }
    cout << add;
    return 0;
}