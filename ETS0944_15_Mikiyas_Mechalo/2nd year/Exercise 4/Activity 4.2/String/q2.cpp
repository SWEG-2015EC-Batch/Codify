//code to check if a word is a palindrome
#include <iostream>
using namespace std;

int main(){

    char word[] = "keek";
    int j=3;

    for(int i=0; i<4; i++){
        if(word[i] != word[j]){
            cout << "The word is not palindrome.\n";
            return 0;
        }
        j--;
    }
    cout << "The word is a palindrome";
    
    return 0;
}
