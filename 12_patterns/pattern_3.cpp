// * * * * * 
// * * * * 
// * * * 
// * * 
// * 

#include <iostream>
using namespace std;

int main() {

    // input rows
    int rows;
    cout << "Enter no. of rows: ";
    cin >> rows;

    // print the pattern
    cout << "\nPattern:-\n";

    for(int i=rows; i>=1; i--) {
        for(int j=i; j>=1; j--) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}