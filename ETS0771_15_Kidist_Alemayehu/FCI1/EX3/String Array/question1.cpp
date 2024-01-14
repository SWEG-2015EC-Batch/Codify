
#include <iostream>
#include <cstring>
using namespace std;

int main(){

    string word;
    cout << "Enter a word or a sentence: ";
    getline(cin, word);
    
    int vowel= 0, consonant = 0;

    for (int i=0; i<word.length(); i++){
        char temp = toupper(word[i]);
        switch (temp){
        case 'A':
            vowel +=1;
            break;
        case 'E':
            vowel +=1;
            break;
        case 'I':
            vowel +=1;
            break;
        case 'O':
            vowel +=1;
            break;
        case 'U':
            vowel +=1;
            break;
        default:
            consonant +=1;
            break;
        }
    }

    cout << "We have " << vowel << " vowel letters";
    cout << " and " << consonant << " consonant letters.\n";
    
    return 0;
}
