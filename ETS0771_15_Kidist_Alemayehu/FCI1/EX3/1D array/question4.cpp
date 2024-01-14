#include <iostream>
using namespace std;
const int ROWS = 3;
const int COLS = 3;

int main() {
    int first[ROWS][COLS], second[ROWS][COLS], result[ROWS][COLS];

    // input elements for first array
    cout << "Enter elements for first array:" << std::endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> first[i][j];
        }
    }

    // input elements for second array
    cout << "Enter elements for second array:" << std::endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> second[i][j];
        }
    }

    // add equivalent elements of the two arrays and store in result array
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            result[i][j] = first[i][j] + second[i][j];
        }
    }

    // print resulting data elements in table form
    cout << "Resulting data elements:" << std::endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << result[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
