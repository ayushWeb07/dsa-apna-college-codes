#include <iostream>
using namespace std;

int main () {

    // input radius
    float radius;
    cout << "Enter radius: ";
    cin >> radius;

    // calc. area
    float area= 3.14 * radius * radius;
    cout << endl << "Area: " << area;

    return 0;
}