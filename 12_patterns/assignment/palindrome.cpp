//         1
//       2 1 2
//     3 2 1 2 3
//   4 3 2 1 2 3 4
// 5 4 3 2 1 2 3 4 5


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

        for(int j=i; j>=1; j--) {
            cout << j << " ";
        }

        for(int j=2; j<=i; j++) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}