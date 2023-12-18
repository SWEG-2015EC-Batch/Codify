#include <iostream>

using namespace std;

int main(){

    int length, width;
    cout << "Enter the rectangle length: ";
    cin >> length;
    cout << "Enter the rectangle width: ";
    cin >> width;

    for(int i=0; i < length; i++){

        for(int j=0; j < width; j++){

            cout<< "* ";
        }
        cout << '\n';
    }

    return 0;
    
}
