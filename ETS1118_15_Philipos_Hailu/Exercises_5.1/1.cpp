#include <iostream>
using namespace std;
int main() {
    double balance[5] = { 1000.0, 2.0, 3.4, 17.0, 50.0 };
    int arr[3][4] = { { 10, 11, 12, 13 }, { 20, 21, 22, 23 }, { 30, 31, 32, 33 } };

    cout << "Addresses of elements" << endl;

    for (int i = 0; i < 5; ++i)
    {
        cout << "Address of " << balance[i] << " = " << balance + i << endl;

    }
    cout << "Address of elements in arr " << endl;;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << *(arr + i) + j << "\t";
        }
        cout << endl;
    }

    cout << " Elements of array" << endl;
    cout << "Using the its pointer " << endl;

    for (int i = 0; i < 5; ++i) {
        cout << *(balance + i) << "\t";
    }
    cout << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << *(*(arr + i) + j) << "\t";
        }
        cout << endl;
    }
    cout << "Using another pointer"<<endl;
    double* ptrB = balance;
    for (int i = 0; i < 5; ++i) {
        cout << *ptrB++ << "\t";
    }
        cout << endl;
        int* ptrA = &(arr[0][0]);
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 4; ++j) {
                cout << *ptrA++ << "\t";
            }
            cout << endl;
        }
    return 0;
}
