// Group Project : Printing Pattrens 
// Group Name: Codify!
#include <iostream>
using namespace std;

int main() {
    int n = 8; 

    for (int i = 0; i < n; i++) {
      
        for (int j = 0; j < i; j++) {
            cout << "  ";
        }
      
        for (int k = n - i; k > 0; k--) {
            char ch = 'A' + k - 1;
            cout << ch << " ";
        }

        for (int l = 1; l < n - i; l++) {
            char ch = 'A' + l;
            cout << ch << " ";
        }

        cout << '\n';
    }

    for (int i = n - 2; i >= 0; i--) {
      
        for (int j = 0; j < i; j++) {
            cout << "  ";
        }

        for (int k = n - i; k > 0; k--) {
            char ch = 'A' + k - 1;
            cout << ch << " ";
        }

        for (int l = 1; l < n - i; l++) {
            char ch = 'A' + l;
            cout << ch << " ";
        }

        cout << '\n';
    }

    return 0;
}
