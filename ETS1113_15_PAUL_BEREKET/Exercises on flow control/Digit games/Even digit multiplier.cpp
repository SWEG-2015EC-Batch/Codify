#include <iostream>
using namespace std;

int main() {
    int number, originalNumber, evenProduct = 1;

    cout << "Enter an integer: ";
    cin >> number;

    originalNumber=number;
    while (number > 0) {
        int temp = number % 10;
        if (temp % 2 == 0) {
            evenProduct *= temp;
        }
        number /= 10;
    }
    cout<< "product of even numbers in the number "<<originalNumber<<" is " <<evenProduct<<endl;

    return 0;
}

