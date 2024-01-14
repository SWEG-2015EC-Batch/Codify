#include <iostream>
using namespace std;
const int SIZE = 9;

int main() {
    double volts[SIZE] = {11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59};

    cout << "Volts:" << std::endl;

    for (int i = 0; i < SIZE; i += 3) {
        cout << volts[i] << "\t";
        if (i + 1 < SIZE) {
            cout << volts[i + 1] << "\t";
        }
        if (i + 2 < SIZE) {
            cout << volts[i + 2];
        }
        cout << endl;
    }

    return 0;
}
