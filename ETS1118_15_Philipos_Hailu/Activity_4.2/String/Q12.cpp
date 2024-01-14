#include <string.h>
#include <iostream>


using namespace std;
int main(){

    char answerSheet[10] = {'a','b','c','d','a','b','c','d','a','a'},usersAnswer[10];
    int count(1),correct(0);
    cout<<"10 multiple choice questions"<<endl;
    cout<<"Enter the letter of your choice a,b,c or d to"<<endl;

    for (int i = 0; i < 10; i++){

        cout<<"Question num"<<count++<<" : ";
        cin>>usersAnswer[i];
        cout<<endl;
        if(usersAnswer[i] == answerSheet[i]){

            correct++;

        }
        
    }

    cout<<"You have answred "<<correct<<" questions correctly"<<endl;
    cout<<"the marked student answers:"<<endl;

    count = 1;
    for (int i = 0; i < 10; i++){
        
        cout<<"num"<<count++<<" : "<<usersAnswer[i]<<endl;
        
    }

    return 0;

}
