#include <iostream>
#include <cmath>
using namespace std;

int binaryToDecimal(long long int bin) {
    int res= 0;
    int pos= 0;

    while (bin > 0) {
        int d= bin % 10;
        res+= d * pow(2, pos++);
        bin/= 10;
    }

    return res;
}

int main() {

    // input a num
    long long int bin;
    cout << "Enter binary number: ";
    cin >> bin;

    // calc and print
    int dec= binaryToDecimal(bin);

    cout << bin << " -> " << dec;

    return 0;
}