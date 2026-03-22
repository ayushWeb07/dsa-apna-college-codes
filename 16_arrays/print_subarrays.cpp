#include <iostream>
#include <string>
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

void printSubarrays(int arr[], int n) {

    string temp;

    for (int i= 0; i<n; i++) {
        for(int j=i; j<n; j++) {
            temp= "";

            for(int k=i; k<=j; k++) {
                temp+= to_string(arr[k]);
            }

            cout << temp << " ";
        }
        
        cout << endl;
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
    
    // display the subarrays
    cout << "\n\nSubarrays:-\n";

    printSubarrays(nums, n);
}