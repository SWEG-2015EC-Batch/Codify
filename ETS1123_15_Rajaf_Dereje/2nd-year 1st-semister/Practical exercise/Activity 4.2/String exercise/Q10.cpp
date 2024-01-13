/*
This program stores a password in a character array called pass. The program then
ask users for the password and check whether they typed the proper password or not.
*/
#include <iostream>
#include <string.h>
using namespace std;

int main(){

    string pass, vertif;
    int count[4] = {0};

    cout<<"Enter your password; make sure it is atleast 6 characters long and include atleast one uppercase one lowercase and one special character:\n";
    cout<<"Password: ";
    cin>>pass;

    if(pass.size() <6 ){
        cout<<"Your password is less than 6 charachter";
    }else{
        for(int i=0; i<pass.size(); i++){
            if(isalpha(pass[i])){
                if(isupper(pass[i])){
                    count[0]++;
                }else{
                    count[1]++;
                }
            }else if(isdigit(pass[i])){
                continue;
            }else{
                count[2]++;
            }
        }

        if(count[0] == 0){
            cout<<"Your password doesn't contain an uppercase letter";
        }else if(count[1] == 0){
            cout<<"Your password doesn't contain a lowercase letter";
        }else if(count[2] == 0){
            cout<<"Your password doesn't contain a special character";
        }else if(count[0] == 0 && count[1] == 0){
            cout<<"Your password doesn't contain any letter";
        }else if(count[0] == 0 && count[2] == 0){
            cout<<"Your password doesn't contain an uppercase letter and special charachter";
        }else if(count[1] == 0 && count[2] == 0){
            cout<<"Your password doesn't contain a lowercase letter and special character";
        }else{
              cout<<"Vertify: ";
        cin>>vertif;

        if(vertif.size()!=pass.size()){
           cout<<"Your vertifier contains unmatching numbers of characters";
         }else{
           for(int i=0; i<pass.size(); i++){
              if(vertif[i]!=pass[i]){
                  count[3]++;
                }
            }
          }

         if(count[3] == 0){
        cout<<"Password verified thankyou\n";
        }else{
        cout<<"Your verification doesn't match please try again";
         }

        }

    }

   

    return 0;
}
