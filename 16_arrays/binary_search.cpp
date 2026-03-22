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

int binarySearch(int arr[], int n, int key) {

    int st= 0, end= n-1, mid;

    while (st <= end)
    {
        // calc mid
        mid= (st + end) / 2;

        if(arr[mid] == key) {
            return mid;
        }

        else if(arr[mid] < key) {
            // search in the 2nd half
            st= mid+1;
        }

        else {
            // search in the 1st half
            end= mid-1;
        }
    }

    return -1;
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

    // perform search
    int key;
    cout << "\nSearch for a number: ";
    cin >> key;

    int searchResult= binarySearch(nums, n, key);
    
    if(searchResult == -1) {
        cout << key << " is not present in the array";
    }

    else {
        cout << key << " is present at index: " << searchResult;
    }
}