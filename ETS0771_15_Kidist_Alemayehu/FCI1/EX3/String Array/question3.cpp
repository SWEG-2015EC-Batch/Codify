#include <iostream>
#include <cstring>

int main() {
    const int MAX_LENGTH = 100;
    char input[MAX_LENGTH];
    char output[MAX_LENGTH];
    int j = 0;

    std::cout << "Enter a string: ";
    std::cin.getline(input, MAX_LENGTH);

    int length = std::strlen(input);

    for (int i = 0; i < length; i++) {
        if (std::isalpha(input[i])) {
            output[j] = input[i];
            j++;
        }
    }

    output[j] = '\0';

    std::cout << "The alphabetic characters in the string are: " << output << std::endl;

    return 0;
}
