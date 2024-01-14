//Suppose indices represent people and that the value at row i, column j of a 2D array is true
// just in case i and j are friends and false otherwise. Initialize the 2D array to represent the
// following configuration. Then the program counts how many pairs of friends are represented
// in the array. Note that each friendship pair appears twice in the array, so in the example
// above below there are 6 pairs of friends.

#include <iostream>

using namespace std;

int main(){

    bool friends[5][5] = {{false, true, false, true, true},{true, false, true, false, true},
                          {false, true, false, false, false},{true, false, false, false, true},
                          {true, true, false, true, false}};

    cout << "    |   0   1   2   3   4   \n" ;
    cout << "----+-----------------------\n";

    for (int i = 0; i < 5; i++){
        cout<< i+1 <<"   |   ";
        for (int j = 0; j < 5; j++){
            /* if (friends[i][j] == true){
                cout << "*\t";
            }else{
                cout << " \t";
            } */
            friends[i][j] == true ? cout << "*   " : cout << "    ";
        }
        cout << '\n';
    }
 


    return 0;
    
}
