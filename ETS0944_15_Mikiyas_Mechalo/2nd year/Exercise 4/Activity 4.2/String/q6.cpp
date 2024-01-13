//Design a program to find the frequency of characters within string and display character with
// largest and smallest frequency respectively.
#include <iostream>
using namespace std;

int main() {
    int charFreq[256] = {0};
    string word;

    cout << "Enter a string: ";
    getline(cin, word);

    for (int i = 0; i < word.size(); i++) {
        char charValue = word[i];
        charFreq[charValue]++;
    }

    int maxFreq = 0, minFreq = 256;
    char maxChar, minChar;

    for (int i = 0; i < 256; i++) {
        if (charFreq[i] > 0) {
            if (charFreq[i] > maxFreq) {
                maxFreq = charFreq[i];
                maxChar = char(i);
            }
            if (charFreq[i] < minFreq) {
                minFreq = charFreq[i];
                minChar = char(i);
            }
        }
    }

    cout << "The most frequent character is '" << maxChar << "' with a frequency of " << maxFreq << '\n';
    cout << "The least frequent character is '" << minChar << "' with a frequency of " << minFreq << '\n';

    return 0;
}
