#include <iostream>
using namespace std;

int main() {

    // input number
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // calc & print sum of digits
    int s=0;

    while (n > 0)
    {
        int d= n % 10;
        s+= d;
        n/= 10;
    }

    cout << "Sum of digits: " << s;
    

    return 0;
}