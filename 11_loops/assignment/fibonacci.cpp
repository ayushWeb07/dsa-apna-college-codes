#include <iostream>
using namespace std;


int main() {

    // input num
    int n;
    int a, b, c;
    int f;
    
    cout << "Enter no. of terms: ";
    cin >> n;

    cout << "Fibonacci series: ";

    if(n <= 1) {
        cout << "0";
    }


    else {
        a= 0;
        b= 1;
        c= 1;

        f= 2;

        cout << "0 1";

        while (++f <= n) {
            cout << " " << c;

            a= b;
            b= c;
            c= a + b;
        }
        
    }
    
    return 0;
}
