#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if(n <= 1) {
        return true;
    }

    for(int i=2; i<=sqrt(n); i++) {
        if(n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {

    // input num
    int n;
    cout << "Enter a no: ";
    cin >> n;

    // check & print if prime
    bool p= isPrime(n);

    cout << n << " is " << (p ? "" : "not ") << "prime";

    return 0;
}