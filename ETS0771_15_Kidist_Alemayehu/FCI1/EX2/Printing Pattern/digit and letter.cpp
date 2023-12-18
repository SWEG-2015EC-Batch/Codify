#include <iostream>
using namespace std;

int main(){

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
