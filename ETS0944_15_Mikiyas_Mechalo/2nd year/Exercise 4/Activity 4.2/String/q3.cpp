// A program to remove non-alphabet character from string
#include <iostream>
using namespace std;

int main(){
    
     
    string word = "miki:ya$s'm*ech#a=*l/-o@gmail.com";
    
    for (int i = 0; i < word.length(); i++){
        if(!isalpha(word[i])){
            word.erase(i,1);
            i--;
        }a
    }
    cout << "The remaining charachters are : " << word; 
    


    return 0;
}
