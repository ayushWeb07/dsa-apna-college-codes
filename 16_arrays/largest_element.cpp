#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

    // input the array length
    int n;
    cout << "Enter length: ";
    cin >> n;

    // input array
    int nums[n];

    cout << "Enter " << n << " numbers: ";

    for(int i=0; i<n; i++) {
        cin >> nums[i];
    }

    // print array
    cout << "\nArray: ";
    for(int i=0; i<n; i++) {
        cout << nums[i] << " ";
    }

    // get the largest
    int maxEle= nums[0];

    for(int i=0; i<n; i++) {
        maxEle= max(maxEle, nums[i]);
    }

    cout << "\nLargest element: " << maxEle;

    return 0;
}