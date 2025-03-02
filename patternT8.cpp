#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 4; j >= 0; j--)
        {
            if (i >= j)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            if (i <= j)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout<<endl;
    }
}
//     *
//    **
//   ***
//  ****
// *****
// *****
//  ****
//   ***
//    **
//     *