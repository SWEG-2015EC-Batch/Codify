#include <iostream>
using namespace std;
int main(){

    string inputString;

    cout<< "Enter a string: ";
    getline(cin,inputString);

    //frequency calculation
    int frequency[256] = {0};

    for(char ch : inputString){
        frequency[ch]++;
    }

    //finding the character with the largest and smallest frequency

    char maxFreq = '\0';
    char minFreq = '\0';

    for (int i = 0; i < 256; ++i){
        if(frequency[i] > frequency[maxFreq]){
            maxFreq = i;
        }

        if(frequency[i] > 0 && (frequency[i] < frequency[minFreq] || maxFreq != '\0')){
            minFreq = i;
        }

    }

    cout<< "The character with the largest frequency is: "<<maxFreq<<endl;
    cout<< "The character with the smallest frequency is: "<<minFreq<<endl;
    
    return 0;
}
