// 1 1 1 1 1
// 2 2 2 2 2
// 3 3 3 3 3
// 4 4 4 4 4
// 5 5 5 5 5


#include <iostream>
using namespace std;

int main() {

    // input rows
    int rows, cols;
    cout << "Enter no. of rows: ";
    cin >> rows;

    cols= rows;

    // print the pattern
    cout << "\nPattern:-\n";

    for(int i=1; i<=rows; i++) {
        for(int j=1; j<=cols; j++) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}