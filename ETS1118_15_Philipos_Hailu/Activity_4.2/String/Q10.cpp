#include <string.h>
#include <iostream>


using namespace std;
int main(){

    string pass,pass1;

    cout<<"Enter a new password: ";
    cin>>pass;

    cout<<"Enter your password: ";
    cin>>pass1;
    if (pass==pass1){

        cout<<"The pasword you entered is correct"<<endl;

    }else{

        cout<<"The pasword you entered is wrong"<<endl;

    } 

    return 0;

}
