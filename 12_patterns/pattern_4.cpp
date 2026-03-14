// A
// B C
// D E F
// G H I J
// K L M N O

#include <iostream>
using namespace std;

int main() {

    // input rows
    int rows;
    cout << "Enter no. of rows: ";
    cin >> rows;

    char ch= 'A';

    // print the pattern
    cout << "\nPattern:-\n";

    for(int i=1; i<=rows; i++) {
        for(int j=1; j<=i; j++) {
            cout << (ch++) << " ";
        }
        cout << endl;
    }

    return 0;
}