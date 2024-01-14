#include <iostream>
using namespace std;

int main() {
    const int ROWS = 3;
    const int COLS = 4;
    int arr[ROWS][COLS];

    // Read in the array elements
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << "Enter element at row " << i << ", column " << j << ": ";
            cin >> arr[i][j];
        }
    }

    // Calculate the sum of even elements
    int even_sum = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (arr[i][j] % 2 == 0) {
                even_sum += arr[i][j];
            }
        }
    }

    // Print the even elements and '*' instead of odd elements
    cout << "\nEven Elements\n";
    cout << "-------------\n";
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (arr[i][j] % 2 == 0) {
                cout << arr[i][j] << "\t";
            } else {
                cout << "*\t";
            }
        }
        cout << endl;
    }

    // Print the sum of even elements
    cout << "-------------\n";
    cout << "Sum of Even Elements: " << even_sum << endl;

    return 0;
}
