// C++ program, to read 3*4 2D-array, find and print the sum of even array elements. The program also print even array elements and ‘*’ instead of odd numbers in tabular form
#include <iostream>
using namespace std;
int main(){

    int intigers[3][4], count = 1, sum = 0;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){

            cout<<"Enter num"<<count++<<": ";
            cin>>intigers[i][j];

        }

    }


    for(int i = 0; i < 3; i++){
        
        for (int j = 0; j < 4; j++){

            if(intigers[i][j]%2 == 0){

                sum += intigers[i][j];
        
            }

            if(intigers[i][j]%2 == 0){

            cout<<intigers[i][j]<<"\t";
            
            }else{

                cout<<"*"<<"\t";
            }

        }

      cout<<endl; 

    }

    cout<<"Sum of the even intigers: "<<sum<<endl;

    return 0;
}
