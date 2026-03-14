#include <iostream>
using namespace std;

int main() {

    int a, b;

    // input 2 nums
    cout << "Enter 2 nums: ";
    cin >> a >> b;

    // get the sum and print
    int sum= a + b;
    cout << "Sum: " << sum;

    // get the avg and print
    float avg= (a + b) / 2.0;
    cout << "\nAvg: " << avg;

    return 0;
}