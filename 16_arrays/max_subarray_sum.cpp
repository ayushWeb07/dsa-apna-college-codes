#include <iostream>
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

// version 1 -> bruteforce | TC O(n^3)
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

// version 2 -> remove the inner k loop and instead accumulate the sum | TC O(n^2)
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

// version 3 -> kadane's algo | TC O(n)
int calcMaxSubarraySum_v3(int arr[], int n) {
    int maxSum= INT_MIN, sum= 0;

    for (int i= 0; i<n; i++) {
        sum+= arr[i];
        maxSum= max(maxSum, sum);

        if(sum < 0) {
            sum= 0;
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