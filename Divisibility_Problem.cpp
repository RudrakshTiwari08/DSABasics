// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     int j = 0;

//     while (j < t)
//     {
//         int a;
//         int b;
//         cin >> a;
//         cin >> b;

//         int count = 0;
//         if(a%b !=0)
//         {
//           while (a % b != 0)
//           {
//             a += 1;
//             count += 1;
//           }
//         }
//         if( a% b ==0 ){
//             cout<<count<<endl;
//         }
//         j++;
//     }

//     return 0;
// }





#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        // Calculate the number of increments needed
        int count = (b - (a % b)) % b;

        cout << count << endl;
    }

    return 0;
}

