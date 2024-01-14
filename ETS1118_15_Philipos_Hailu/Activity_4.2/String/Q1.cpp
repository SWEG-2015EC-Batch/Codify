#include <iostream>
using namespace std;
int main(){

    char paragraph[150];
    int vowles = 0, consonants = 0;

    cout<<"Enter a string: ";
    cin.getline (paragraph,150);

    for (int i = 0; paragraph[i] != '\0' ; i++){

        if(paragraph[i] == 'a' || paragraph[i] == 'e' || paragraph[i] == 'i' || paragraph[i] == 'o' || paragraph[i] == 'u' 
        || paragraph[i] == 'A' || paragraph[i] == 'E' || paragraph[i] == 'I' || paragraph[i] == 'O' || paragraph[i] == 'U'){
            vowles++;
        }else if((paragraph[i] >= 'a' && paragraph[i] <= 'z') || (paragraph[i] >= 'A' && paragraph[i] <= 'Z' ) ){
            ++consonants;
        }
        
    }

    cout<< "The number of vowles: "<<vowles<<endl;
    cout<< "The number of consonants: "<<consonants<<endl;
    
    return 0;
}
