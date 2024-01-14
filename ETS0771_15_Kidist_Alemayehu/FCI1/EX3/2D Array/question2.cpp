#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 4;

int main() {
    int arr[ROWS][COLS];

    // Read in the array elements
     << "Enter the array elements:" <<endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cin >> arr[i][j];
        }
    }

    // Calculate row products and column sums
    int row_products[ROWS], col_sums[COLS];
    for (int i = 0; i < ROWS; i++) {
        row_products[i] = 1;
        for (int j = 0; j < COLS; j++) {
            row_products[i] *= arr[i][j];
            col_sums[j] += arr[i][j];
        }
    }

    // Display the results
    cout << "Row products: ";
    for (int i = 0; i < ROWS; i++) {
        cout << row_products[i] << " ";
    }
    cout << endl;

    cout << "Column sums: ";
    for (int j = 0; j < COLS; j++) {
        cout << col_sums[j] << " ";
    }
    cout << endl;

    return 0;
}
