#include <iostream>

using namespace std;

int main(){

    int hight;
    cout<< "Enter the hight of the triangle: ";
    cin >> hight;

    for(int i = 0; i < hight; i++){
        for(int j = 0; j<=i; j++){
            cout << " *";
        }
        
        cout << '\n';
    }
  return 0;
}
