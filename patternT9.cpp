#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"provide the number of asterisk u wnat in the pattern";
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
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
        for (int j = n-1; j >= 0; j--)
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



    for (int i = 0; i < n; i++)
    {
        for ( int j = n-1; j >=0; j--)
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

         for (int j = 0; j <n ; j++)
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
        cout << endl;
    }



}



// *        *
// **      **
// ***    ***
// ****  ****
// **********
// **********
// ****  ****
// ***    ***
// **      **
// *        *
