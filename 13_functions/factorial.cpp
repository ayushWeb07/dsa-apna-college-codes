#include <iostream>
using namespace std;

long factorial(int n) {
    if(n <= 1) {
        return 1;
    }

    long f= 1;

    for(int i=2; i<=n; i++) {
        f*= i;
    }

    return f;
}

int main() {

    // input num
    int n;
    cout << "Enter a no: ";
    cin >> n;

    // calc & print factorial
    long f= factorial(n);

    cout << n << "! = " << f;

    return 0;
}