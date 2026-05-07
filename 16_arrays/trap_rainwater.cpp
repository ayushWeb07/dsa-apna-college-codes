#include <iostream>
#include <climits>
using namespace std;

void inputHeights(int heights[], int n) {
    for(int i=0; i<n; i++) {
        cin >> heights[i];
    }
}

void displayHeights(int heights[], int n) {
    for(int i=0; i<n; i++) {
        cout << heights[i] << " ";
    }
}

void calculateLeftMaxArray(int heights[], int leftMaxHeights[], int n) {
    leftMaxHeights[0]= INT_MIN;

    for (int i=1; i<n; i++) {
        leftMaxHeights[i]= max(leftMaxHeights[i-1], heights[i-1]);
    }
}

void calculateRightMaxArray(int heights[], int rightMaxHeights[], int n) {
    rightMaxHeights[n-1]= INT_MIN;

    for (int i=n-2; i>=0; i--) {
        rightMaxHeights[i]= max(rightMaxHeights[i+1], heights[i+1]);
    }
}

// using auxiliary arrays | TC O(n)
int calculateAmtWaterTrapped(int heights[], int leftMaxHeights[], int rightMaxHeights[], int n) {

    // must have atleast 3 bars
    if (n < 3) {
        return 0;
    }

    int totalAmt= 0, barWidth= 1, currHeight, leftMaxHeight, rightMaxHeight, minHeight, valleyHeight, currAmt;

    for (int i= 1; i<n-1; i++) {
        currHeight= heights[i];

        // get the left max height: 0 -> i
        leftMaxHeight= leftMaxHeights[i]; // O(1)

        // get the right max height: i -> n-1
        rightMaxHeight= rightMaxHeights[i]; // O(1)

        if ((currHeight > leftMaxHeight) || (currHeight > rightMaxHeight)) {
            continue;
        }

        // get the min bar height -> min(left height, right height)
        minHeight= min(leftMaxHeight, rightMaxHeight);

        valleyHeight= minHeight - currHeight;

        // calculate currAmt -> valleyHeight * width
        currAmt= valleyHeight * barWidth;

        // accumulate
        totalAmt+= currAmt;
    }

    return totalAmt;
}

int main() {
    // input length
    int n;
    cout << "Enter length: ";
    cin >> n;

    // input heights
    int heights[n];
    cout << "Enter " << n << " heights: ";
    inputHeights(heights, n);

    // calc the left and right max heights
    int leftMaxHeights[n];
    int rightMaxHeights[n];
    calculateLeftMaxArray(heights, leftMaxHeights, n);
    calculateRightMaxArray(heights, rightMaxHeights, n);

    // display heights
    cout << "\nHeights: ";
    displayHeights(heights, n);

    // get the amt of water trapped
    int amtWaterTrapped= calculateAmtWaterTrapped(heights, leftMaxHeights, rightMaxHeights, n);
    cout << "\n\nAmount of water trapped: " << amtWaterTrapped;
}