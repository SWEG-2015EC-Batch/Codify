//a program that Suppose indices represent people and that the value at row i, column j of a 2D array is true just in case i and j are friends and false otherwise. Initialize the 2D array to represent the following configuration. Then the program counts how many pairs of friends are represented in the array. Note that each friendship pair appears twice in the array
#include <iostream>
using namespace std;
int main(){

    bool friends[5][5] = {0,1,0,1,1,1,0,1,0,1,0,1,0,0,0,1,0,0,0,1,1,1,0,1,0};
    int count = 0;
    
    for(int i = 0; i < 5; i++){
        
        for (int j = 0; j < 5; j++){

            if(friends[i][j] == 0){

                cout<<" "<<"\t";

            }else{

                cout<<"*"<<"\t";
                count++;

            }

        }

      cout<<endl; 

    }

    cout<<"There number of pair of frinds are: "<<count/2<<endl;

    return 0;
}
