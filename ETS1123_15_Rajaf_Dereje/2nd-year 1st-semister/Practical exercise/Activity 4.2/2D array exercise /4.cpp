/*
This program read 3*4 2D-array, find and print the sum of even array elements. The
program should also print even array elements and ‘*’ instead of odd numbers in tabular form
*/
#include <iostream>
using namespace std;

int main(){

    int arrays[3][4], sum(0);

    cout<<"Enter 4 Elements for each row as demonistrated below\nRow 1: 2 4 5 7\n";
    for (int i=0; i<3; i++){
        cout<<"Row "<<i+1<<": ";
        for(int j=0; j<4; j++){
            cin>>arrays[i][j];
            sum += arrays[i][j];
        }
    }

    cout<<"The sum of every element in the array is "<<sum<<"\n";
     for (int i=0; i<3; i++){
        
        for(int j=0; j<4; j++){
           if(arrays[i][j]%2==0){
            cout<<arrays[i][j]<<"\t";
           }else{
            cout<<"*\t";
           }
        }
        cout<<endl;
    }
    

    
    

    return 0;
}
