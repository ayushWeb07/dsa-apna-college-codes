#include <iostream>
#include <algorithm>
using namespace std;

void inputNums(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
}

void displayNums(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
}

// tc -> O(n log n)
bool checkContainsDuplicates(int arr[], int n) {
    sort(arr, arr+n);

    for(int i=0; i<n-1; i++) {
        if (arr[i] == arr[i+1]) {
            return true;
        }
    }

    return false;
}

int main() {
    // input length
    int n;
    cout << "Enter length: ";
    cin >> n;

    // input nums
    int nums[n];
    cout << "Enter " << n << " numbers: ";
    inputNums(nums, n);

    // display nums
    cout << "\nNumbers: ";
    displayNums(nums, n);

    // check if it contains duplicates
    bool res= checkContainsDuplicates(nums, n);
    cout << "\nIt contains " << (res? "" : "no ") << "duplicates";

    return 0;
}