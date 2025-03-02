// PASCAL TRIANGLE

#include <iostream>
using namespace std;
int main()
{

    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }
}

/*
    *    
   * *   
  * * *  
 * * * * 
* * * * * 

*/