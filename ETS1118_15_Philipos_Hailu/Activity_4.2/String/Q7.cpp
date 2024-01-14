#include <iostream>
using namespace std;
int main(){

    int num ;

    cout<<"Enter number of people: ";
    cin>>num;

    string names[num], temp;

    cout<<"Enter name of the "<<num<<" people:" <<endl;
    for (int i = 0; i < num; i++){

        cin>>names[i];

    }

    for (int i = 0; i < num; ++i){
        for (int j = i + 1; j < num; ++j){
            if(names[i] > names[j]){
                temp = names[i];
                names[i] = names[j];
                names[j] = temp;

            }
        
        }

    }

    cout<<"The names in alphabetical order are: "<<endl;
    for (int i = 0; i < num; ++i){

        cout<<names[i]<<endl;

    }    

    return 0;
}
