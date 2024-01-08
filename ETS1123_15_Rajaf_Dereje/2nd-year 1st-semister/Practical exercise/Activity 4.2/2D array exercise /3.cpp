/*
This program store exam scores (test, assignment, quiz, project and final). The
program should determine and print the score level alongside with the total mark in tabular
format. Score status level for score >=80 Excellent, >=60 Very Good, >= 50 Fair, >=40 poor
and <40 Fail.
*/
#include <iostream>
#include <string.h>
using namespace std;

int main() {

int N;
cout<<"\nFor how many students will you use the program: ";
cin>>N;
string ID[N];
float marks[N][6];

cout<<"Enter your information as follows: \n"
    <<"Id: ETS1123\n"
    <<"test: 5\n"
    <<"assingnment: 20\n"
    <<"quiz: 5\n"
    <<"project: 20\n"
    <<"final: 50\n";

char grade;
for(int i=0; i<N; i++){
    cout<<"Id: ";
    cin>>ID[i];
    cout<<"test: ";
    cin>>marks[i][0];
    cout<<"assingnmet: ";
    cin>>marks[i][1];
    cout<<"quiz: ";
    cin>>marks[i][2];
    cout<<"project: ";
    cin>>marks[i][3];
    cout<<"final: ";
    cin>>marks[i][4];

    marks[i][5] = marks[i][0] + marks[i][1] + marks[i][2] + marks[i][3] + marks[i][4];
    cout<<endl;
   
}

cout<<"\nID\t|\ttotal\tgrade\n";
for(int i=0; i<N; i++){
    if (marks[i][5]>=90 && marks[i][5]<=100)
    grade = 'A';
    else if(marks[i][5]>=80)
    grade = 'B';
    else if(marks[i][5]>=70)
    grade = 'C';
    else if(marks[i][5]>40)
    grade = 'D';
    else 
    grade = 'F';
   
    cout<<ID[i]<<"\t|\t"<<marks[i][5]<<"\t"<<grade<<"\n";

return 0;
}
