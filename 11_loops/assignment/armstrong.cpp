#include <iostream>
using namespace std;


int main() {

    // input num
    int n;
    int t;
    int s;
    
    cout << "Enter a 3 digit no: ";
    cin >> n;

    if (n < 100 || n > 999) {
        cout << "Invalid range";
    }

    else {

        t= n;
        s= 0;

        // calc sum of cube of digits
        while (t > 0) {
            int d= t % 10;
            s+= (d * d * d);
            t/= 10;
        }

        if(s == n) {
            cout << "Armstrong";
        }

        else {
            cout << "Not armstrong";
        }

    }
    
    return 0;
}
