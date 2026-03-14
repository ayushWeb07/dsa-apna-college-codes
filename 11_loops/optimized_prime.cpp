#include <iostream>
#include <cmath>
using namespace std;

int main() {

    // input number
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(n >= 0 && n <= 2) {
        cout << "Prime";
    }

    else {
        // check prime
        bool isPrime= true;

        for(int i= 2; i <= sqrt(n); i++) {
            if(n % i == 0) {
                // prime
                cout << "Not Prime";
                isPrime= false;
                break;
            }
        }

        if (isPrime) {
            cout << "Prime";
        }
    }

    return 0;
}