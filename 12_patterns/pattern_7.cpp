// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 

#include <iostream>
using namespace std;

int main() {

    // input rows
    int rows;
    cout << "Enter no. of rows: ";
    cin >> rows;

    int count= 1;

    // print the pattern
    cout << "\nPattern:-\n";

    for(int i=1; i<=rows; i++) {
        for(int j=1; j<=i; j++) {
            cout << (count++) << " ";
        }
        cout << endl;
    }

    return 0;
}