// *             *
// * *         * *
// * * *     * * *
// * * * * * * * *
// * * * * * * * *
// * * *     * * *
// * *         * *
// *             *

// 1 -> 1* + 3S | 3S + 1*
// 2 -> 2* + 2S | 2S + 2*
// 3 -> 3* + 1S | 1S + 3*
// 4 -> 4* + 0S | 0S + 4*

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

        for(int j=1; j<=i; j++) {
            cout << "* ";
        }

        for(int j=1; j<= 2 * (rows-i); j++) {
            cout << "  ";
        }

        for(int j=1; j<=i; j++) {
            cout << "* ";
        }

        cout << endl;
    }

    for(int i=rows; i>=1; i--) {

        for(int j=1; j<=i; j++) {
            cout << "* ";
        }

        for(int j=1; j<= 2 * (rows-i); j++) {
            cout << "  ";
        }

        for(int j=1; j<=i; j++) {
            cout << "* ";
        }

        cout << endl;
    }



    return 0;
}
