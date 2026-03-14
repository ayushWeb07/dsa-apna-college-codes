#include <iostream>
using namespace std;

int main() {

    // input the income
    float income;
    cout << "Enter your income (in $): ";
    cin >> income;

    // calculate tax
    float tax= 0;

    if (income >= 500000 && income <= 1000000) {
        tax= (income * 20) / 100;
    }

    else if(income > 1000000) {
        tax= (income * 30) / 100;
    }

    cout << "\nIncome: $" << income
         << "\nTax: $" << tax;

    return 0;
}