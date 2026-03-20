#include <iostream>
using namespace std;

void change(int* ptr) {
    *ptr= 20;
}

int main() {

    int a= 10;

    cout << "Before: " << a;
    change(&a);
    cout << "\nAfter: " << a;

    return 0;
}