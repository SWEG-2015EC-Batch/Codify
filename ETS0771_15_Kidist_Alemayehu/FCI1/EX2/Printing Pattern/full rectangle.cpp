/* This programme will display patten of rectangle */

#include <iostream>

using namespace std;

int main(){

int width, length;
    cout << "Enter the rectangle width: ";
    cin >> length;
    cout << "Enter the rectangle length: ";
    cin >> width;

    for(int i = 1; i <= width; i++){
    
        for(int j = 1; j <= length; j++){
            cout << " *";
        }
        cout << "\n";
    }
return 0;
}
