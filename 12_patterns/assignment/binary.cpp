// 1 
// 0 1 
// 0 1 0 
// 1 0 1 0 
// 1 0 1 0 1 

#include <iostream>
using namespace std;

int main() {

    // input rows
    int rows;
    cout << "Enter no. of rows: ";
    cin >> rows;

    bool flag= true;

    // print the pattern
    cout << "\nPattern:-\n";

    for(int i=1; i<=rows; i++) {
        for(int j=1; j<=i; j++) {
            cout << flag << " ";
            flag= !flag;
        }
        cout << endl;
    }

    return 0;
}