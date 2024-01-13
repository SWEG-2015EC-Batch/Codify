#include <iostream>

using namespace std;

int main(){

    int first [2][4] = {{12, 2, 5, 4},{8, 4, 7, 3}};
    int product1 = 1, product2 = 1;
    int sum;

    for (int i=0; i<2;i++){
        for (int j = 0; j < 4; j++){
            cout << first[i][j] << '\t';
            i == 0  ? product1 *=  first[i][j] : product2 *=  first[i][j];
        }
        cout << '\n';
    }
    cout << "The product of the first row " << product1 << '\n';
    cout << "The product of the second row " << product2 << '\n';
    
    for (int i=0; i<4;i++){
        sum = first[0][i] + first [1][i];
        cout << "The sum of column #" << i+1 << " is " << sum << '\n';
    }
 


    return 0;
    
}
