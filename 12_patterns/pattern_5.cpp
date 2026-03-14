// * * * * * 
// *       *
// *       *
// * * * * *

#include <iostream>
using namespace std;

int main() {

    // input rows & cols
    int rows, cols;
    cout << "Enter no. of rows and cols: ";
    cin >> rows >> cols;

    // print the pattern
    cout << "\nPattern:-\n";

    for(int i=1; i<=rows; i++) {
        for(int j=1; j<=cols; j++) {
            if(i == 1 || i == rows) {
                cout << "* ";
            }

            else {
                if(j == 1 || j == cols) {
                    cout << "* ";
                }

                else {
                    cout << "  ";
                }
            }
        }

        cout << endl;
    }

    return 0;
}