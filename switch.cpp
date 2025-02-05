// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the number of the week (between 1 to 7): ";
//     cin >> n;

//     switch (n) {
//         case 1:
//             cout << "MON" << endl;
//             break;
//         case 2:
//             cout << "TUES" << endl;
//             break;
//         case 3:
//             cout << "WED" << endl;
//             break;
//         case 4:
//             cout << "THURS" << endl; 
//         case 5:
//             cout << "FRI" << endl;
//             break;
//         case 6:
//             cout << "SAT"<< endl; 
//             break;
//         case 7:
//             cout << "SUN" << endl;
//             break;
//         default:
//             cout << "Invalid input! Please enter a number between 1 and 7." << endl; // Added feedback for invalid input
//             break;
//     }

//     return 0; // Added return statement for main function
// }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of the week (between 1 to 7): ";
    cin >> n;

    switch (n) {
        case 1:
            cout << "MON" << endl;
            break;
        case 2:
            cout << "TUES" << endl;
            break;
        case 3:
            cout << "WED" << endl;
            break;
        case 4:
            cout << "THURS" << endl; 
            break; // Added missing break here
        case 5:
            cout << "FRI" << endl;
            break;
        case 6:
            cout << "SAT" << endl; 
            break;
        case 7:
            cout << "SUN" << endl;
            break;
        default:
            cout << "Invalid input! Please enter a number between 1 and 7." << endl; // Feedback for invalid input
            break;
    }

    return 0; // Return statement for main function
}