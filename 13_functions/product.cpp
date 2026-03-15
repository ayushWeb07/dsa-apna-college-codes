#include <iostream>
using namespace std;

int product(int a, int b) {
    return  (a * b);
}

int main() {

    // input nums
    int a, b;
    cout << "Enter 2 no.s: ";
    cin >> a >> b;

    // print prod
    int prod= product(a, b);

    cout << a << " * " << b << " = " << prod;

    return 0;
}