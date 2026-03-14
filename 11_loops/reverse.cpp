#include <iostream>
using namespace std;

int main() {

    // input number
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // store the number in reverse
    int rev= 0;

    while (n > 0)
    {
        int d= n % 10;
        rev= rev * 10 + d;
        n/= 10;
    }
    
    cout << "Reverse: " << rev;

    return 0;
}