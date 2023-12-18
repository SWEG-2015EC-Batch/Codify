#include <iostream>
using namespace std;

int main() {
    int num, sumOfDivisors = 0;

    cout << "Enter a number: ";
    cin >> num;

    for (int i = 1; i < num/2; i++) {
        if (num % i == 0) {
            sumOfDivisors += i;
        }
    }

    if (sumOfDivisors == num) {
        cout << num << " is a perfect number\n";
    } else {
        cout << num << " is not a perfect number\n";
    }

    return 0;
}
