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

            if(i == 1 || i == width || j == 1 || j == length){
                cout << " *";
            }
            else{
                cout << "  ";
            }
        }
        cout << "\n";
    }

    return 0;
    
}
