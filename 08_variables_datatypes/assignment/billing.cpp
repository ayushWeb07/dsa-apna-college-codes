#include <iostream>
using namespace std;

int main() {

    // input cost of pen, pencil, eraser
    float penCost;
    float pencilCost;
    float eraserCost;

    cout << "Enter cost of pen, pencil, eraser: ";

    cin >> penCost >> pencilCost >> eraserCost;

    // get the subtotal and apply 18% gst
    float subtotal= penCost + pencilCost + eraserCost;
    float gst= (18 * subtotal) / 100;

    float total= subtotal + gst;

    cout << endl
        << "Subtotal: $" << subtotal
        << "\nGST: $" << gst
        << "\nTotal: $" << total;

}