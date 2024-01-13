// Write C++ program, to read 3*4 2D-array, find and print the sum of even array elements. The
// program should also print even array elements and ‘*’ instead of odd numbers in tabular form
#include <iostream>

using namespace std;

int main(){

    int numbers[3][4] = {1,9,10,3,4,2,7,8,5,6,11,12};
    int sum = 0;
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            numbers[i][j] % 2 ==0 ? cout << numbers[i][j] << '\t' : cout << "*\t";
            if (numbers[i][j] % 2 ==0)  sum+=numbers[i][j] ;
        }
        cout << '\n';
    }

    cout << "The sum of the even elements is " << sum << '\n';
 


    return 0;
    
}
