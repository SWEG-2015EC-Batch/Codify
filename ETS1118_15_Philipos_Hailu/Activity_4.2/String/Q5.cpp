#include <iostream>
using namespace std;
int main(){

    char paragraph[150];
    int vowles = 0, consonants = 0, digits = 0, specialChar(0);

    cout<<"Enter a string: ";
    cin.getline (paragraph,150);

    for (int i = 0; paragraph[i] != '\0' ; i++){

        if(paragraph[i] == 'a' || paragraph[i] == 'e' || paragraph[i] == 'i' || paragraph[i] == 'o' || paragraph[i] == 'u' 
        || paragraph[i] == 'A' || paragraph[i] == 'E' || paragraph[i] == 'I' || paragraph[i] == 'O' || paragraph[i] == 'U'){
            vowles++;
        }else if((paragraph[i] >= 'a' && paragraph[i] <= 'z') || (paragraph[i] >= 'A' && paragraph[i] <= 'Z' ) ){
            ++consonants;
        }else if(paragraph[i] >= '0' && paragraph[i] <= '9'){
            ++digits;
        }else{
            ++specialChar;
        }
        
    }

    cout<< "The number of vowles: "<<vowles<<endl;
    cout<< "The number of consonants: "<<consonants<<endl;
    cout<< "The number of digits: "<<digits<<endl;
    cout<< "The number of special Characters: "<<specialChar<<endl;
    
    return 0;
}
