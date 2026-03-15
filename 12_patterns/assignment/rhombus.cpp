//         * * * * *
//       * * * * *
//     * * * * *
//   * * * * *
// * * * * *

// 1 -> 4S + 5*
// 2 -> 3S + 5*
// 3 -> 2S + 5*
// 4 -> 1S + 5*
// 5 -> 0S + 5*

#include <iostream>
using namespace std;

int main() {

    // input rows
    int rows;
    cout << "Enter no. of rows: ";
    cin >> rows;

    // print the pattern
    cout << "\nPattern:-\n";

    for(int i=1; i<=rows; i++) {

        for(int j=1; j<=rows-i; j++) {
            cout << "  ";
        }

        for(int j=1; j<=rows; j++) {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}