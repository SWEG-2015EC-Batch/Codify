#include <iostream>

int main() {

    int number, sum = 0;
    std::cout << "Enter a number: ";
    std::cin >> number;

    // Ensure the number is positive
    if (number <= 0) {
        std::cout << "Please enter a positive integer.";
        return 1;
    }

    for (int i = 1; i <= number / 2; ++i) {
        if (number % i == 0) {
            sum += i;
        }
    }

    if (sum == number) {
        std::cout << number << " is a perfect number.\n";
    } else {
        std::cout << number << " is not a perfect number.\n";
    }

    return 0;
}
