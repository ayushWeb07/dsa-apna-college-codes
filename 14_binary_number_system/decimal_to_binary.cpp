#include <iostream>
#include <cmath>
#include <string>
using namespace std;

string decimalToBinary(int dec) {
    string bin= "";

    if(dec <= 0) {
        return "0";
    }

    while (dec != 0) {
        int r= dec % 2;
        bin= to_string(r) + bin;
        dec/= 2;
    }

    return bin;
}

int main() {

    // input a num
    int dec;
    cout << "Enter decimal number: ";
    cin >> dec;

    // calc and print
    string bin= decimalToBinary(dec);

    cout << dec << " -> " << bin;

    return 0;
}