#include <iostream>
using namespace std;

int main() {

    // input number
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // print digits in reverse
    cout << "Digits: ";

    while (n > 0)
    {
        int d= n % 10;
        cout << d << " ";
        n/= 10;
    }
    

    return 0;
}