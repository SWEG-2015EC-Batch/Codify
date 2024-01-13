/*
Write a program that find the frequency of vowel, consonant, digit and special character
*/
#include <iostream>
#include <string.h>
using namespace std;

int main(){

    string words;
    int count[4] = {0};

    cout<<"Enter a word or a senetence:\n";
    getline(cin,words);

    for(int i=0; i<words.size(); i++){
        words[i] = tolower(words[i]);
        if(isalpha(words[i])){
            switch (words[i])
            {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                count[0]++;
                break;
            default:
                count[1]++;
                break;
            }
        }else if(isdigit(words[i])){
            count[2]++;
        }else{
            count[3]++;
        }
    }

    cout<<"Your word/senetence has:\n"
        <<count[0]<<" vowls\n"
        <<count[1]<<" consonants\n"
        <<count[2]<<" digits\n"
        <<count[3]<<" special characters";

    return 0;
}
