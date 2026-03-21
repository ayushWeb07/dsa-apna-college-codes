#include <iostream>
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

void reverse(int arr[], int n) {
    int st= 0, end= n-1;

    while(st <= end) {
        swap(arr[st++], arr[end--]);
    }
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

    // perform reversal
    reverse(nums, n);

    cout << "\nReversed: ";
    displayNums(nums, n);
}