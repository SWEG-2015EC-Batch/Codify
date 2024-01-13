// Write a program that checks whether two one dimensional arrays of the same size are
// identical (have the same elements) or not. 
#include <iostream>

using namespace std;

int main(){

    int first [] = {12, 25, 35, 41};
    // int second [] = {12, 25, 35, 41};
    int second[] = {12, 25, 35, 41};

    for(int i=0; i<4; i++){
        if (first[i]==second[i])
        {
            continue;
        }
        else{
            cout << "The two arrays are not the same.";
            return 0;
        }
        
    }
    cout << "The two arrays are the same";
 


    return 0;
    
}
