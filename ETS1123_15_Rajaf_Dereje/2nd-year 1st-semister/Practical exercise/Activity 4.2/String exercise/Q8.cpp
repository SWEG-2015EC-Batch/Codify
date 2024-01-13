/*
this program inputs a line of text and outputs the text twice, once in all uppercase
and once in all lowercase letters.
*/
#include <iostream>
#include <string.h>
using namespace std;

int main(){

    string words;

    cout<<"Enter a sentence or a word:\n";
    getline(cin,words);
    cout<<"\n\nUppercase: ";
    for(int i=0; i<words.size(); i++){
        words[i] = toupper(words[i]);
    }
    cout<<words<<endl;

    cout<<"Lowercase: ";
    for(int i=0; i<words.size(); i++){
        words[i] = tolower(words[i]);
    }
    cout<<words;


    return 0;
}
