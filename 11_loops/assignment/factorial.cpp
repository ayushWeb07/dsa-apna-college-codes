#include <iostream>
using namespace std;


int main() {

    // input num
    int n;
    long f= 1;
    
    cout << "Enter a no: ";
    cin >> n;

    if (n == 0 || n == 1) {
        cout << n << "!= " << 1;
    }

    else {
        // calc. and print factorial
        for(int i= 1; i <= n; i++) {
            f*= i;
        }

        cout << n << "!= " << f;
    }
    
    return 0;
}
