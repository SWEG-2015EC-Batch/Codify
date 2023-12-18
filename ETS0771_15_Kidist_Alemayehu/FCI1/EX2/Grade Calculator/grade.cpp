/* thhs programme converts the course marks entered in from the user to 
    corresponding letter grade*/

#include<iostream>
using namespace std;

int main(){
    double total, test, quiz, project, assignmnet, final_E;
    cout<< "Enter your quiz out of  5%: ";
    cin>>test;
    cout<< "Enter your test out of 15%: ";
    cin>>quiz;
    cout<< "Enter your assignment out of 10%: ";
    cin>>project;
    cout<< "Enter your project out of 20: ";
    cin>>assignmnet;
    cout<< "Enter your final exam out of 50%: ";
    cin>>final_E;

   total = test + project + quiz + assignmnet + final_E;

    if(total>= 90){
        cout<<"it is A+";
    }
    else if(total>= 80 && total <= 90){
        cout<<" it's A";
    }
    else if(total>= 75 && total <= 80){
        cout<<" it's B+";
        }
    else if(total>= 60 && total <= 75){
        cout<<" it's B";
        }
    else if( total>= 55 && total <= 60){
        cout<<" it's C+";
        }
    else if(total>= 45 & total <= 55){
        cout<<" it's C";
        }
    else if(total>= 30 & total <= 45){
        cout<<" it's D";
        }
    else if( total < 30){
        cout<<" it's F";
        }
    return 0;
}

