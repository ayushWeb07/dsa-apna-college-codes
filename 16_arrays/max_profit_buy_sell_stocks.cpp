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

// version 1 -> bruteforce | TC O(n^2)
int calculateMaxProfit_v1(int arr[], int n) {
    int maxProfit= INT_MIN, currProfit;

    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            currProfit= arr[j] - arr[i];
            maxProfit= max(maxProfit, currProfit);
        }
    }

    return maxProfit < 0 ? 0 : maxProfit;
}

// version 2 -> DP | TC O(n)
int calculateMaxProfit_v2(int arr[], int n) {
    int miniPrice= INT_MAX, maxProfit= 0, currProfit;

    for (int i=0; i<n; i++) {
        miniPrice= min(miniPrice, arr[i]);
        currProfit= arr[i] - miniPrice;
        maxProfit= max(maxProfit, currProfit);
    }

    return maxProfit;
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
    int maxProfit= calculateMaxProfit_v2(nums, n);
    cout << "\n\nMax profit: " << maxProfit;
}