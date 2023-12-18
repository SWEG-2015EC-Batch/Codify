#include <iostream>

using namespace std;

int main() {
    
    int n;
    cout << "Enter the height of the pyramid: ";
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i; j++) {
      cout << " ";
    }
    
    if (i == n) {
      for (int j = 1; j <=n ; j++) {
        cout << "* ";
      }
      cout << endl;
      continue;
    }
    
    cout << "*";
    
    for (int j = 1; j <= 2 * (i - 1) - 1; j++) {
      cout << " ";
    }
    
    if (i != 1 && i != n) {
      cout << "*";
    }
    
    cout << endl;
    }
    
    return 0;
}
