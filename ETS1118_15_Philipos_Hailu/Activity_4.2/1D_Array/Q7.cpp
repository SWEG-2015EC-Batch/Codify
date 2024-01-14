//a program that store a list of number and print the even numbers in the array in reverse order they are entered. 
#include <iostream>
using namespace std;
int main(){

int num, count = 1, countEven = 0, p = 0;
cout<< "Enter how many numbers are in the list: ";
cin>>num;

// count the number of even numbers in the list using countEven
int listOfNum[num];

for (int i = 0; i < num; i++){
    cout<< " Enter num"<< " "<<count++<< ": ";
    cin>>listOfNum[i];

    if((listOfNum[i])%2 == 0){
        countEven++;
    } 
}

//store the even numbers together in an an array named evenNum
int evenNum[countEven];

for (int i = 0; i < num; i++){

    if((listOfNum[i])%2 == 0){
        evenNum[p++] = listOfNum[i];   
    }    
}

for (int p = (countEven - 1); p > -1; p--){
    cout<<evenNum[p]<<", ";   
}
cout<<endl;
    return 0;
}
