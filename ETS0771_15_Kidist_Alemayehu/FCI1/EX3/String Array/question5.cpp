#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const int MAX_LENGTH = 100;
    char input[MAX_LENGTH];
    int vowels[5] = {0}; // a, e, i, o, u
    int consonants = 0;
    int digits = 0;
    int special_chars = 0;

    cout << "Enter a string: ";
    cin.getline(input, MAX_LENGTH);

    for (int i = 0; i < strlen(input); i++) {
        char c = input[i];
        if (isalpha(c)) {
            c = tolower(c);
            if (c == 'a') {
                vowels[0]++;
            } else if (c == 'e') {
                vowels[1]++;
            } else if (c == 'i') {
                vowels[2]++;
            } else if (c == 'o') {
                vowels[3]++;
            } else if (c == 'u') {
                vowels[4]++;
            } else {
                consonants++;
            }
        } else if (std::isdigit(c)) {
            digits++;
        } else {
            special_chars++;
        }
    }

    cout << "Vowels: a=" << vowels[0] << ", e=" << vowels[1] << ", i=" << vowels[2] << ", o=" << vowels[3] << ", u=" << vowels[4] << std::endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Digits: " << digits << endl;
    cout << "Special characters: " << special_chars << endl;

    return 0;
}
