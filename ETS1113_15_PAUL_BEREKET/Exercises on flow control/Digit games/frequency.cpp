#include <iostream>
using namespace std;

int main() {
    int num;
    int frequency[10] = {0};

    cout << "Enter an integer: ";
    cin >> num;

    // Count the frequency of each digit
    while (num != 0) {
        int digit = num % 10;
        frequency[digit]++;
        num = num / 10;
    }

    // Print the frequency table
    cout << "Digit   Frequency" << endl;
    for (int i = 0; i < 10; i++) {
        if (frequency[i] > 0) {
            cout << "  " << i << "        " << frequency[i] << endl;
        }
    }

    return 0;
}

