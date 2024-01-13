/*
This program  checks weather the word is palindrome or not.
*/
#include <iostream>
#include <string.h>
using namespace std;

int main(){

    string word;
    int count(0);
    cout<<"Enter a word\n";
    getline(cin,word);
    
    for(int i=0; i<word.size(); i++){
        word[i] = towlower(word[i]);
        if(word[i] != word[word.size() - (i + 1)]) {
            count++;
        }
    }

    if(count >0){
        cout<<"Your word is not a palindrome";
    }else{
        cout<<"your word is palandrome";
    }

    return 0;
}
