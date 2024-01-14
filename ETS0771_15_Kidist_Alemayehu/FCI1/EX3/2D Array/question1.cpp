#include <iostream>

int main() {
    const int SIZE = 5;
    int arr1[SIZE], arr2[SIZE];

    cout << "Enter elements of first array: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> arr1[i];
    }

    cout << "Enter elements of second array: ";
    for (int i = 0; i < SIZE; i++) {
        cin >> arr2[i];
    }

    bool identical = true;
    for (int i = 0; i < SIZE; i++) {
        if (arr1[i] != arr2[i]) {
            identical = false;
            break;
        }
    }

    if (identical) {
        cout << "The arrays are identical." << endl;
    } else {
        cout << "The arrays are not identical." << endl;
    }

    return 0;
}
