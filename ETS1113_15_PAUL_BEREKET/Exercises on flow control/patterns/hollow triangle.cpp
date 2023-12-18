#include <iostream>

using namespace std;

int main(){

    int hight;
    cout<< "Enter the hight of the triangle: ";
    cin >> hight;

    int temp = hight;
    for(int i = hight; i >= 1; i--){
        for(int j = 1; j<=i; j++){
            if(j == 1 || i == hight  || j == i){
                cout << " *";
            }
            else{
                cout << "  ";
            }
        }
        cout << '\n';
    }

  return 0;
}
