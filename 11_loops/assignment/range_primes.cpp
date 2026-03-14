#include <iostream>
#include <cmath>
using namespace std;


int main() {

    // input num
    int n;

    cout << "Enter a no (> 2): ";
    cin >> n;

    if (n <= 2) {
        cout << "Invalid range";
    }

    else {

        cout << "Prime numbers: ";

        for (int i= 2; i <= n; i++) {

            // check prime
            bool isPrime= true;

            for(int j= 2; j <= sqrt(i); j++) {
                if(i % j == 0) {
                    // prime
                    isPrime= false;
                    break;
                }
            }

            if (isPrime) {
                cout << i << " ";
            }
        }

    }
    
    return 0;
}
