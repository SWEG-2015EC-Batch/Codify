#include <iostream>
#include <cstring>

int main() {
    const int MAX_LENGTH = 100;
    char input[MAX_LENGTH];
    char tokens[MAX_LENGTH][MAX_LENGTH];
    int token_count = 0;

    std::cout << "Enter a line of text: ";
    std::cin.getline(input, MAX_LENGTH);

    char* token = std::strtok(input, " ");
    while (token != nullptr) {
        std::strcpy(tokens[token_count], token);
        token_count++;
        token = std::strtok(nullptr, " ");
    }

    std::cout << "The tokens are:\n";
    for (int i = 0; i < token_count; i++) {
        std::cout << tokens[i] << std::endl;
    }

    return 0;
}
