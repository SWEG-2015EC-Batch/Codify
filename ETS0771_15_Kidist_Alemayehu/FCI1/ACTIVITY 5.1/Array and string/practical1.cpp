#include <iostream>
using namespace std;
int main() {
    double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
    int arr[3][4] = { { 10, 11, 12, 13 }, { 20, 21, 22, 23 }, { 30, 31, 32, 33 }};

    cout << "Addresses of elements in double array:" <<endl;
    for (int i = 0; i < 5; ++i) {
        cout << "&balance[" << i << "] = " << &balance[i] << endl;
    }

    cout << "\nAddresses of elements in 2D int array:" <<endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
           cout << "&arr[" << i << "][" << j << "] = " << &arr[i][j] << endl;
        }
    }

   cout << "\nPrint array elements using pointers:" << endl;

    double* balancePtr = balance;
    for (int i = 0; i < 5; ++i) {
        cout << "balancePtr[" << i << "] = " << *(balancePtr + i) << endl;
    }

    int* arrPtr = &arr[0][0];
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
           cout << "arrPtr[" << i << "][" << j << "] = " << *(arrPtr + i * 4 + j) <<endl;
        }
    }

    return 0;
}
