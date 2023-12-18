#include <iostream>

using namespace std;

int main() {
    int height;

    cout << "Enter the height of the pyramid: ";
    cin >> height;

    for (int i = 1; i <= height; ++i) {
        for (int j = 1; j <= height - i; ++j){ // Print spaces for the left side of the pyramid
            cout << "  ";
        }   
        
        for (int k = 1; k <= 2 * i - 1; ++k){ // Print '*' for the left and right sides of the pyramid
            cout << " *";
        }

        cout << '\n';   // Move to the next line after each row
    }
    return 0;
}
