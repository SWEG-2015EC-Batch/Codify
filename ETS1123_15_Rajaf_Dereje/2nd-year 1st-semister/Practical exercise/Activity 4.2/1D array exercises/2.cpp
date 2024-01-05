/*
This program reads eight integer numbers into an array named temp. As each number is input, add
the number into a total. After all numbers are input, display the number and their average.
*/
#include <iostream>
using namespace std;

int main() {
float temp[8],total(0);
cout<<"\n\nEnter 8 numbers and we will display the avarage\n\n";
for(int i=0;i<8;i++){
    cout<<"Number "<<i+1<<":";
    cin>>temp[i];
    total+=temp[i];
}
cout<<"\n\nThe numbers you've enterd are:\n\n";
for(int i=0;i<8;i++){
    cout<<temp[i]<<", ";
}
cout<<"\nYour avarage is "<<total/8;

return 0;
}
