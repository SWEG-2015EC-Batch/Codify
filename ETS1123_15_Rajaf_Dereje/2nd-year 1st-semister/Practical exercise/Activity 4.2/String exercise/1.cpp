/*
this program  reads a string and count number of vowels and consonants alphabet
present in a string.
*/
#include <iostream>
#include <string.h>
using namespace std;

int main(){

    string words;
   int fre[2] = {0};

   cout<<"Enter a word or a senetence\n";
   getline(cin,words);
   for(int i=0; i<words.size(); i++){
    words[i] = tolower(words[i]);
    switch (words[i])
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        fre[0]++;
        break;
    
    default:
        if(isalpha(words[i])){
            fre[1]++;
        }
        break;
    }
   }
   cout<<"your word/sentence contains\n" <<fre[0]<<" vowels"<<endl<<fre[1]<<" consonants";
    return 0;
}
