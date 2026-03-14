//       *
//     * * *
//   * * * * *
// * * * * * * *
// * * * * * * *
//   * * * * *
//     * * *
//       *

// 1 -> 3S + 1*
// 2 -> 2S + 3*
// 3 -> 1S + 5*
// 4 -> 0S + 7*

// 4 -> 0S + 7*
// 3 -> 1S + 5*
// 2 -> 2S + 3*
// 1 -> 3S + 1*

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

        for(int j=1; j<= rows-i; j++) {
            cout << "  ";
        }

        for(int j=1; j<= (2 * i - 1); j++) {
            cout << "* ";
        }

        cout << endl;
    }
    

    for(int i=rows; i>=1; i--) {

        for(int j=1; j<= rows-i; j++) {
            cout << "  ";
        }

        for(int j=1; j<= (2 * i - 1); j++) {
            cout << "* ";
        }

        cout << endl;
    }
    

    return 0;
}
