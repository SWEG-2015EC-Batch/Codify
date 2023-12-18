//This program tells whether a character entered from a user is special character, an alphabet or a number
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    
    char key;
// read the input 
   
    cout << "press a character on the keyboard: ";
    cin >> key;
 
 // check if the input is an alphabet
 
  if(isalpha(key)) 
  {
   
     char upperKey = toupper(key);
     if (upperKey =='A' || upperKey =='E' || upperKey=='I' || upperKey=='O' || upperKey=='U'){
          
           if(isupper(key)){
           cout<< "The key you entered is a vowel, uppercase letter." <<endl;}
           else {
            cout<< "The key you entered is a vowel, lowercase letter." <<endl;}
   
           }
     else
  {

        if(isupper(key)){
        cout<< "The key you entered is a consonant, uppercase letter." <<endl ;}
        else {
        cout<< "The key you entered is a consonant, lowercase letter." <<endl;}
  }
 }
       
       
       //check if the input is a number
       
 else if(isdigit(key))
    {
            if(key%2 == 0){
                cout<<"The key you entered is an even number." <<endl;}
             else{ 
                cout<<"The key you entered is an odd number." <<endl;}
    }
      
       //checking if the input is neither alphabet nor number to decide if it is a special character
        
        else if (!isalnum(key)){
            cout<< "the key you entered is a special character." <<endl ;
   }

return 0;
}
