#include <iostream>
using namespace std;

int reverse(int n) {
    int rev= 0;

    while(n > 0) {
        int d= n % 10;
        rev= rev * 10 + d;
        n/= 10;
    }

    return rev;
}

bool isPalindrome(int n) {
    if(n <= 99) {
        return false;
    }

    return n == reverse(n);
}

int main() {

    // input num
    int n;
    cout << "Enter a no: ";
    cin >> n;

    // check and print
    bool isPalin= isPalindrome(n);

    cout << n << " is " << (isPalin? "" : "not ") << "palindrome";


    return 0;
}