//a program to input the following values in an array named volts: 11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, and 17.59. After the data has been entered, the program display it three column in table form:
#include <iostream>
using namespace std;
int main(){
    
    float voltsk1[][3] = {11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59};
    

   for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
           
            cout<< ":\t"<< voltsk1[i][j]<<"\t:";

        }
        cout<<endl;
    }            
    return 0;
}
