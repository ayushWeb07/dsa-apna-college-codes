#include <iostream>
#include <string>
#include <algorithm>
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

int calcMaxSubarraySum_v1(int arr[], int n) {
    int maxSum= INT_MIN, sum;

    for (int i= 0; i<n; i++) {
        for(int j=i; j<n; j++) {
            sum= 0;

            for(int k=i; k<=j; k++) {
                sum+= arr[k];
            }

            maxSum= max(maxSum, sum);
        }
    }

    return maxSum;
}

int calcMaxSubarraySum_v2(int arr[], int n) {
    int maxSum= INT_MIN, sum;

    for (int i= 0; i<n; i++) {
        sum= 0;

        for(int j=i; j<n; j++) {
            sum+= arr[j];
            maxSum= max(maxSum, sum);
        }
    }

    return maxSum;
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
    
    // get the max subarray sum
    int maxSum= calcMaxSubarraySum_v2(nums, n);
    cout << "\n\nMax subarray sum: " << maxSum;
}