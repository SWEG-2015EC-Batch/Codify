#include <iostream>
using namespace std;
int main() {
    int temp[8], total = 0;

    // input numbers and calculate total
    for (int i = 0; i < 8; i++) {
        cout << "Enter number " << i+1 << ": ";
        cin >> temp[i];
        total += temp[i];
    }

    // calculate average
    double average = static_cast<double>(total) / 8;

    // display total and average
    cout << "Total: " << total << std::endl;
    cout << "Average: " << average << std::endl;

    return 0;
}


