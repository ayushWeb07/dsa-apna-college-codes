#include <iostream>
using namespace std;

int main() {

    // input the p, r, t
    float p, r, t;

    cout << "Enter the principal amount, rate of interest, time period in years: ";
    cin >> p >> r >> t;

    // calculate the si and final amount
    float si= (p * r * t) / 100;

    float finalAmt= p + si;

    cout << endl << "Principal: $" << p
         << endl << "Interest: $" << si
         << endl << "Final amt: $" << finalAmt;


    return 0;
}