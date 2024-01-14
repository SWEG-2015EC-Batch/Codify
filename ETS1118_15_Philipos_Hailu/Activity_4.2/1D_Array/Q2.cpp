// a program to input eight integer numbers into an array named temp. As each number is input, add the number into a total. After all numbers are input, display the number and their average.
#include <iostream>
using namespace std;
int main(){
    int temp[8], count = 1, sum = 0;
    for (int i = 0; i < 8; i++){
        
        cout<<"Enter number "<<count++<<": ";
        cin>>temp[i];
        sum+=temp[i];
    }
    cout<<"The numbers you entered are: ";
    for (int i = 0; i < 8; i++){
        cout<<temp[i]<<", ";
    }
    
    cout<<"\nAverage: "<<sum/8 <<endl;

    return 0;
}
