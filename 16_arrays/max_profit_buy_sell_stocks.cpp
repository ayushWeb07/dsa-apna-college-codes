#include <iostream>
#include <climits>
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

int calculateMaxProfit(int arr[], int n) {
    int maxProfit= INT_MIN, currProfit;

    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            currProfit= arr[j] - arr[i];
            maxProfit= max(maxProfit, currProfit);
        }
    }

    return maxProfit < 0 ? 0 : maxProfit;
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

    // get the max profit
    int maxProfit= calculateMaxProfit(nums, n);
    cout << "\n\nMax profit: " << maxProfit;
}