/*
this program finds the total mark of a student from taking :
test
quiz
project
assignment
final exam
and converts it to grade if 'A','B','C','D','F'
*/

#include <iostream>

using namespace std;

int main()
{
   int mark, test, quiz, project, assignmnet, finalExam;

   //input prompting output message
   cout<< "Enter your test value from 15%: ";
   cin>>test;
   cout<< "Enter your quiz value from 5%: ";
   cin>>quiz;
   cout<< "Enter your project value from 20%: ";
   cin>>project;
   cout<< "Enter your assignment value from 10%: ";
   cin>>assignmnet;
   cout<< "Enter your final exam value from 50%: ";
   cin>>finalExam;

   mark = test + project + quiz + assignmnet + finalExam;

   if (mark >=90){
    cout<< "your mark grade is A+";
   }
   else if(mark >=80) {
    cout<< "your mark grade is A";
   }
   else if(mark >=75) {
    cout<< "your mark grade is B+";
   }
   else if(mark >=60) {
    cout<< "your mark grade is B";
   }
   else if(mark >=55) {
    cout<< "your mark grade is C+";
   }
   else if(mark >=45) {
    cout<< "your mark grade is C";
   }
   else if(mark >=30) {
    cout<< "your mark grade is D";
   }
   else if(mark <30&& mark >=0) {
    cout<< "your mark grade is F";
   }

   cout<< endl<<endl<<endl;
    return 0;
}
