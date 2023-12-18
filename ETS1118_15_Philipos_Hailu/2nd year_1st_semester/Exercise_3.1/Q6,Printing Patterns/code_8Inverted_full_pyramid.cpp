#include <iostream>

using namespace std;

int main() {
    int height;

    cout << "Enter the height of the pyramid: ";
    cin >> height;    

    for(int i =0;i<height;i++){
        for(int j = i; j>0; j--){
            cout << " ";
        }
        for(int j = i; j<height; j++){
            if(i%2==0){
                cout << " *";
            }else{
                cout << " *";
            }
        }
        if(i!=height-1){
            cout << endl;
        }
    }
    return 0;
}
