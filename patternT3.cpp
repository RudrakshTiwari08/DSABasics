#include <iostream>
using namespace std;
int main()
{

    int i;
    int j;
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
// *****
//  ****
//   ***
//    **
//     *