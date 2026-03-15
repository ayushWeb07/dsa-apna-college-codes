#include <iostream>
using namespace std;

bool even_check(int n) {
    return (n % 2 == 0);
}

int main() {

    // input num
    int n;
    cout << "Enter a no: ";
    cin >> n;

    // check even
    bool is_even= even_check(n);

    cout << n << " is " << (is_even? "even" : "odd");

    return 0;
}