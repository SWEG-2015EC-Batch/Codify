//Write a C++ program that read and adds equivalent elements of the two-dimensional arrays named first
// and second. The program should print the resulting data elements in table form.
#include <iostream>

using namespace std;

int main(){

    int first [3][3] = {{12, 25, 35}, {41,12, 25}, {35, 41, 34}}, second[3][3] = {{50, 25, 35}, {44, 22,50}, {35, 44, 22}};

    cout << "Result \n";

    for (int i=0; i<3; i++){
        for (int j = 0; j <3 ; j++)
        {
            cout<< first[i][j]+second[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}
