// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *

#include <iostream>
using namespace std;

int main() {

    // input rows and cols
    int rows, cols;
    
    cout << "Enter no. of rows: ";
    cin >> rows;

    cols= rows;

    // print the star pattern
    for (int i=1; i <= rows; i++) {
        for (int j= 1; j <= cols; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}