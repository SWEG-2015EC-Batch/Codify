#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    char charachter;

    cout << "Enter a charachter: ";
    cin >> charachter;

    if (isalpha(charachter)){
        
        if (isupper(charachter)){

            cout  << "The charachter you entered is a an upper case letter and "; 
        }else{
            cout  << "The charachter you entered is a an lower case letter and "; 
        }

        charachter = toupper(charachter);
        
        switch (charachter)
        {
        case 'A' :
            cout << "It is a Vowel.";
            break;
        case 'E':
            cout << "It is a Vowel.";
            break;
        case 'I':
            cout << "It is a Vowel.";
            break;
        case 'O':
            cout << "It is a Vowel.";
            break;
        case 'U':
            cout << "It is a Vowel.";
            break;
        default:
            cout << "It is a consonant.";
            break;
        }

    }
    else if (isdigit(charachter)){
        cout  << "The charachter you entered is a Number.";
    }
    else if (ispunct(charachter)){
        cout  << "The charachter you entered is a Panctuation mark.";
    }

    return 0;

}
