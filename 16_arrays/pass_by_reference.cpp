#include <iostream>
using namespace std;



int main() {

    int n= 3;
    int arr[n]= {1, 2, 3};

    cout << arr << "\n";

    for (int i=0; i<n; i++) {
        cout << *(arr+i) << " ";
    }

    return 0;
}