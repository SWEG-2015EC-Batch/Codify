/*
This program checks whether two one dimensional arrays of the same size are
identical (have the same elements) or not.
*/
#include <iostream>
using namespace std;

int main() {

int array[8],vertifier[8];

cout<<"Enter a 8 numberd array: \n";
for(int i=0; i<8;i++){
    cout<<"num"<<i+1<<": ";
    cin>>array[i];
}

cout<<"\nEnter the vertifier\n";
for(int i=0;i<8;i++){
    cout<<"num"<<i+1<<": ";
    cin>>vertifier[i];
}

int count(0);
for(int i=0; i<8;i++){
    if (vertifier[i]!=array[i]){
        count++;
    }
}

if (count>0){
    cout<<"your array and vertifier have "<<count<<" mismached elements";
}else{
    cout<<"you array and vertifier match";
}
return 0;
}
