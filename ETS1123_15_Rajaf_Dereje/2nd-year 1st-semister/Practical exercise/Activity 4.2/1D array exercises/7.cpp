/*
This program stores a list of number and print the even numbers in the array in reverse order they
are entered.
*/
#include <iostream>
using namespace std;

int main() {
    int N;// stands for number of values
    
    cout<<"How many numbers would you like to enter ";
    cin>>N;
    int nums[N];
    for(int i=0; i<N;i++){
        cout<<"Num"<<i+1<<": ";
        cin>>nums[i];
    }
    
    cout<<"\nFrom the values you've enterd the even numbers are\n";
    for(int i=N; i>0;i--){
        if(nums[i-1]%2==0){
            cout<<nums[i-1]<<endl;
        }
    }

return 0;
}
