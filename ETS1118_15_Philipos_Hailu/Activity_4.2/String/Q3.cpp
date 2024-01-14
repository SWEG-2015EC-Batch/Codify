//a program to remove non-alphabet character from string
#include <iostream>
using namespace std;
int main(){

    string mix,temp = "";

    cout<<"Enter a string: ";
    getline(cin,mix);

    int sizeOfmix = mix.size();

    for (int i = 0; i < sizeOfmix; i++){

        if((mix[i] >= 'a' && mix[i] <= 'z') || (mix[i] >= 'A' && mix[i] <= 'Z' ) ){

            temp += mix[i];
        }

    }

    mix = temp;

    cout<<"output of only alphanumerical characters of the string: "<<mix<<endl;
  
    return 0;

}
