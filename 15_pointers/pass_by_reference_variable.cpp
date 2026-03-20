#include <iostream>
using namespace std;

void change(int& ref) {
    ref= 20;
}

int main() {

    int a= 10;

    cout << "Before: " << a;
    change(a);
    cout << "\nAfter: " << a;

    return 0;
}