// Write a program that find the frequency of vowel, consonant, digit and special character
#include <iostream>
using namespace std;

int main(){

    string word = "Miki@12;";
    int coutVowel = 0, countConsonat =0 , countDigit=0 , countChar =0;

    for (int i = 0; i < word.size(); i++)
    {
        if(isalpha(word[i])){
            char temp = toupper(word[i]);
            if(temp == 'A' || temp == 'E' || temp == 'I' || temp == 'O' || temp == 'U'){
                coutVowel++;
            }
            else{
                countConsonat++;
            }
        }
        else if(isdigit(word[i])){
            countDigit++;
        }
        else{
            countChar++;
        }
    }

    cout << "There are " << coutVowel << " vowels " << countConsonat << " consonants " << countDigit << " digits and " << countChar << " special charachters"; 

    return 0;
}
