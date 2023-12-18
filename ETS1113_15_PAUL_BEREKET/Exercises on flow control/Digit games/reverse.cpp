#include <iostream>
using namespace std;

int main() {
    int num, revers = 0;

    cout << "Enter any ineger: ";
    cin >> num;

    while (num != 0) {
        int temp = num % 10;
        revers = revers * 10 + temp;
        num /= 10;
    }

    cout << "Reversed number: " << revers << endl;

    return 0;
}

