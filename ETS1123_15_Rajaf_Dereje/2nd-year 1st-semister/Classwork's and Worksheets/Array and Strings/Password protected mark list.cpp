/*
this program read the N students fullname, mid-exam, and final exam and find the total score. the exam sore and the total score should,
be stored in the same array. the program also prints the fullname and the total score in tabular form.
a,Write the procedure you might follow
b,Impliment the solution of the problem description
c,protect it with a password
*/
#include <iostream>
#include <string.h>
using namespace std;

int main() {
int N; //stands for the number of students
cout<<"\nFor how many students will you use the program: ";
cin>>N;
cin.ignore();

string fullNames[N],Vertifier;
string password[N];
float Marks[N][3];
cout<<"Enter your full name, Midexame, and final exam according to the below example\n Full name: Rajaf Dereje\n Mid: 20\n Final: 50\n\n";

for (int i=0; i<N; i++){
    cout<<"Full name: ";
    getline(cin,fullNames[i]);
    cout<<"Mid: ";
    cin>>Marks[i][0];
    cout<<"Final: ";
    cin>>Marks[i][1];
    cout<<"Protect your Score with password: ";
    cin>>password[i];          
    cin.ignore();
    Marks[i][2] = Marks[i][0] + Marks[i][1];
    cout<<endl;
}


cout<<"to acess your total score please enter your password: \n";
for(int i=0; i<N; i++){
    cout<<"Student "<<i+1<<" password: ";
    getline(cin,Vertifier);
    for(int j=0; j< password[i].size();j++) {
        if(password[i][j] != Vertifier[j]) {  // checks every element of passowrd string and vertifier string and compares them
            fullNames[i] = "Inaccesable";
            Marks[i][2] = 0;
        }
    }
}

cout<<"Full Name\t\tTotal mark\n";
for(int i=0; i<N; i++){                                                     //to print full name and total score
    cout<<i+1<<","<<fullNames[i]<<"\t|\t"<<Marks[i][2]<<"\n";
}

return 0;
}
