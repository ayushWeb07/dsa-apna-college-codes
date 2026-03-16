#include <iostream>
using namespace std;

bool isPrime(int n) {

    if(n <= 1) {
        return true;
    }

    for(int i=2; i*i<=n; i++) {
        if(n % i == 0) {
            return false;
        }
    }

    return true;
}

void printPrimesInRange(int l, int u) {

    bool isAnyPrime= false;

    cout << "Primes: ";

    for(int i=l; i<=u; i++) {
        if(isPrime(i)) {
            cout << i << " ";
            isAnyPrime= true;
        }
    }

    if(!isAnyPrime) {
        cout << "Nil.";
    }

}

int main() {

    // input range limits
    int l, u;
    cout << "Enter lower and upper limit: ";
    cin >> l >> u;

    if(l > u) {
        swap(l, u);
    }

    // print all the primes
    printPrimesInRange(l, u);

    return 0;
}