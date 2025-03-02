#include <iostream>
using namespace std;
int main()
{
    int sum=0;
    int tt[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    for (size_t i = 0; i < 9; i++)
    {
        sum = sum + tt[i];

    }
    cout<<sum;
}
