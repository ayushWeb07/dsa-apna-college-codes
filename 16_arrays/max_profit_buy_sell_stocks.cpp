#include <iostream>
#include <climits>
using namespace std;

void inputPrices(int prices[], int n) {
    for(int i=0; i<n; i++) {
        cin >> prices[i];
    }
}

void displayPrices(int prices[], int n) {
    for(int i=0; i<n; i++) {
        cout << prices[i] << " ";
    }
}

// version 1 -> bruteforce | TC O(n^2)
int calculateMaxProfit_v1(int prices[], int n) {
    int maxProfit= INT_MIN, currProfit;

    for (int i=0; i<n; i++) {
        for (int j=i+1; j<n; j++) {
            currProfit= prices[j] - prices[i];
            maxProfit= max(maxProfit, currProfit);
        }
    }

    return maxProfit < 0 ? 0 : maxProfit;
}

// version 2 -> DP | TC O(n)
int calculateMaxProfit_v2(int prices[], int n) {
    int miniPrice= INT_MAX, maxProfit= 0, currProfit;

    for (int i=0; i<n; i++) {
        miniPrice= min(miniPrice, prices[i]);
        currProfit= prices[i] - miniPrice;
        maxProfit= max(maxProfit, currProfit);
    }

    return maxProfit;
}

int main() {
    // input length
    int n;
    cout << "Enter length: ";
    cin >> n;

    // input prices
    int prices[n];
    cout << "Enter " << n << " prices: ";
    inputPrices(prices, n);

    // display prices
    cout << "\nNumbers: ";
    displayPrices(prices, n);

    // get the max profit
    int maxProfit= calculateMaxProfit_v2(prices, n);
    cout << "\n\nMax profit: " << maxProfit;
}