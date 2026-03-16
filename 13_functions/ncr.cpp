#include <iostream>
using namespace std;

long factorial (int n) {

    if(n <= 1) {
        return n;
    }

    long f=1;

    for(int i=2; i<=n; i++) {
        f*= i;
    }

    return f;
}

long ncr (int n, int r) {
    long res= factorial(n) / (factorial(r) * factorial(n-r));
    return res;
}

int main() {

    // input n & r
    int n, r;
    cout << "Enter n and r: ";
    cin >> n >> r;

    // calc and print
    long ncrRes= ncr(n, r);

    cout << n << " C " << r << " = " << ncrRes;

    return 0;
}