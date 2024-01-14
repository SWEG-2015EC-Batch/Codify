//a program that checks whether two one dimensional arrays of the same size are identical (have the same elements) or not. 
#include <iostream>
using namespace std;
int main(){

    int numOfElement;

    cout<< "Enter the number of element in the arrays: ";
    cin>>numOfElement;

    int numOfCat[numOfElement], numOfDog[numOfElement], count = 1;;

    for (int i = 0; i < numOfElement; i++){
        
        cout<< "Enter number of cats in place num " <<count++<<": ";
        cin>>numOfCat[i];
    }    
    count = 1;
    for (int i = 0; i < numOfElement; i++){
        
        cout<< "Enter number of dogs in place num " <<count++<<": ";
        cin>>numOfDog[i];
    }    

//rearranging the elements in ascending order
for (int i = 0; i < numOfElement; i++){
    for (int j = i+1; j < numOfElement; j++){
        if (numOfDog[i] > numOfDog[j]){
            int temp = numOfDog[i];
            numOfDog[i] = numOfDog[j];
            numOfDog[j] = temp;
        }       
    }     
}

for (int i = 0; i < numOfElement; i++){
    for (int j = i+1; j < numOfElement; j++){
        if (numOfCat[i] > numOfCat[j]){
            int temp = numOfCat[i];
            numOfCat[i] = numOfCat[j];
            numOfCat[j] = temp;
        }       
    }       
}

// outputs the arranged elements both arrays
cout<< "Elements of number of cats: ";
for (int i = 0; i < numOfElement; i++){
    cout<<numOfCat[i]<<", ";
}

cout<<endl;

cout<< "Elements of number of cats: ";
for (int i = 0; i < numOfElement; i++){
    cout<<numOfDog[i]<<", ";
}

cout<<endl;


//lets check if the two arrays are identical 
count = 0;
for (int i = 0; i < numOfElement; i++){
    if(numOfCat[i] != numOfDog[i]){
        count++;// will count the how many elements are different
    }
}
cout<<"\n Number of different elements: "<<count<<endl;

// check if the two arrays are identical or not
if(count == 0){
    cout<<"The two arrays are identical"<<endl;
}else{
    cout<<"The two arrays are not identical"<<endl;
    }


    return 0;
}

