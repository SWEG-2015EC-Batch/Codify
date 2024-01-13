//an application that inputs a line of text, and tokenizes it using space characters as delimiters.
#include <iostream>
using namespace std;

int main(){
  
  string text;
    cout << "Enter a line of text: ";
    getline(cin, text);

    cout << "Original: " << text << '\n';
    int count = 1;
    cout << "Token "<< count << ": ";

    for (int i = 0; i < text.size(); i++)
    {
        if(text[i] != ' '){
            cout << text[i] ;
        }else{
            cout << "\nToken " << ++count << ": " ;
        }
    }
  

    return 0;
}
