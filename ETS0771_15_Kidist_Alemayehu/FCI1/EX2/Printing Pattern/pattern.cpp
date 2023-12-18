/* This programme will display the different pattens */

#include <iostream>

using namespace std;

int main(){

// this will display rectangle
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


// this will display patten of hollow triangle
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

// this will display triangle
    int length, width;
    cout << "Enter the length: ";
    cin >> length;
    cout << "Enter the width: ";
    cin >> width;

    for(int i=0; i < length; i++){

        for(int j=0; j < width; j++){

            cout<< "* ";
        }
        cout << '\n';
    }

// this will display full prymid
 int height;

    cout << "Enter the height of the pyramid: ";
    cin >> height;

    for (int i = 1; i <= height; ++i) {
        for (int j = 1; j <= height - i; ++j){ 
            cout << "  ";
        }   
        
        for (int k = 1; k <= 2 * i - 1; ++k){
            cout << " *";
        }

        cout << '\n';  
    }
// this will display half prymid
 int hight;
    cout<< "Enter the hight of the triangle: ";
    cin >> hight;

    for(int i = 0; i < hight; i++){
        for(int j = 0; j<=i; j++){
            cout << " *";
        }
        
        cout << '\n';
    }

// this will display hollow prymid
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

// this will display hafly interted prymid

    int hight;
    cout<< "Enter the hight of the triangle: ";
    cin >> hight
    for(int i = 0; i < hight; i++){
        for(int j = i; j<hight; j++){
            cout << "* ";
        }
        cout << '\n';
    }

// this will display fully inverted prymid
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
    // this will display number and letter
     for(int i=0; i<3; i++){
        for(int j =1; j<=5; j++){
            cout << j << ' ';
        }
        cout << '\n';
    }

    for (int i = 0; i<=5; i++){
        int k=1;
        for(int j = i; j>0; j--){
            cout << k <<" "; 
            k++;
        }
        cout<< '\n';
    }

    int g=5;
    for (int i = 0; i<6; i++){
        for(int j=0; j<6-i;j++){
            cout << "  ";
        }
        int k=5-g;
        for(int j = i; j>0; j--){
            cout << k <<" "; 
            k--;
        }
        g--;
        
        cout << endl;   
    }
    cout << endl;   

    for(int i=0; i<4; i++){
       char a='a';
        for(int j =0; j<5;j++){
            cout << a << ' ';
            a++;    
        }
        cout << '\n';
    }
    cout << endl;   

    char c= 'A';
    for(int i=0;i<4;i++){
        for(int j=0; j<6;j++){
            cout << c << ' ';
            c++;
        }
        cout << '\n';
    }

    for (int i = 0; i<=5; i++){
        char c='A';
        for(int j = i; j>0; j--){
            cout << c <<" "; 
            c++;
        }
        cout<< '\n';
    }

    return 0;
    
}
