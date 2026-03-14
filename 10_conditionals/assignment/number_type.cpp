#include <iostream>
using namespace std;

int main() {

    // input a number
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(n > 0) {
        cout << "+ve";
    }

    else if(n < 0) {
        cout << "-ve";
    }

    else {
        cout << "0";
    }

    return 0;
}