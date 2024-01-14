//a C++ program that read and adds equivalent elements of the two-dimensional arrays named firstand second. The program should print the resulting data elements in table form.
#include <iostream>
using namespace std;
int main(){
    
    int first[3][2] = {1,2,3,4,5,6,}, second[3][2] = {10,9,8,7,6,5}, sum[3][2];
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            sum[i][j] = first[i][j]+second[i][j];
            
            
        }    
    
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            cout<< ":\t"<<sum[i][j]<<"\t:";


        }
        cout<<endl;
    }            
    return 0;
}
