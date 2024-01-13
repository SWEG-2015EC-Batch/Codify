/*
This program  remove non-alphabet character from string
*/
#include <iostream>
#include <string.h>
using namespace std;

int main(){
    string words;

    cout<<"enter your word/sentence:\n";
    getline(cin,words);
    
    cout<<"your character without non- alphabrt character is\n";
    for(int i=0; i<words.size(); i++){
        if(isalpha(words[i])){
            cout<<words[i];
        }else{
            continue;
        }
    }

    return 0;
}
