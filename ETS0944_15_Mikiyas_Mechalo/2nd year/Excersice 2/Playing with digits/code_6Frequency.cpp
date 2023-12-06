#include <iostream>

int main() {

    long long number;
    std::cout << "Enter an integer: ";
    std::cin >> number;

    // Ensure the input number is non-negative
    if (number < 0) {
        std::cout << "Please enter a non-negative integer." << std::endl;
        return 1;
    }

    // Count the frequency of each digit (0-9)
    int digit0 = 0, digit1 = 0, digit2 = 0, digit3 = 0, digit4 = 0,
        digit5 = 0, digit6 = 0, digit7 = 0, digit8 = 0, digit9 = 0;

    // Extract digits and update frequency
    while (number != 0) {
        int digit = number % 10;

        // Update the count based on the current digit
        switch (digit) {
            case 0: digit0++; break;
            case 1: digit1++; break;
            case 2: digit2++; break;
            case 3: digit3++; break;
            case 4: digit4++; break;
            case 5: digit5++; break;
            case 6: digit6++; break;
            case 7: digit7++; break;
            case 8: digit8++; break;
            case 9: digit9++; break;
        }

        number /= 10;
    }

    // Print the table header
    std::cout << "Digit  |  Frequency" << std::endl;
    std::cout << "-------------------" << std::endl;

    // Print the digit frequencies in table format
    if (digit0 > 0) std::cout << "  0    |      " << digit0 << std::endl;
    if (digit1 > 0) std::cout << "  1    |      " << digit1 << std::endl;
    if (digit2 > 0) std::cout << "  2    |      " << digit2 << std::endl;
    if (digit3 > 0) std::cout << "  3    |      " << digit3 << std::endl;
    if (digit4 > 0) std::cout << "  4    |      " << digit4 << std::endl;
    if (digit5 > 0) std::cout << "  5    |      " << digit5 << std::endl;
    if (digit6 > 0) std::cout << "  6    |      " << digit6 << std::endl;
    if (digit7 > 0) std::cout << "  7    |      " << digit7 << std::endl;
    if (digit8 > 0) std::cout << "  8    |      " << digit8 << std::endl;
    if (digit9 > 0) std::cout << "  9    |      " << digit9 << std::endl;

    return 0;
}
