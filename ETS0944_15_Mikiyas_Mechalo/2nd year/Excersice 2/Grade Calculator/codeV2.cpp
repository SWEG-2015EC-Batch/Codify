#include <iostream>

using namespace std;

int main(){

    int grade, project, test, quizz, assignment, finalExam;

    cout << "Enter your test score (15%): ";
    cin >> test;
    cout << "Enter your quizz score (5%): ";
    cin >> quizz;
    cout << "Enter your project score (20%): ";
    cin >> project;
    cout << "Enter your assignment score (10%): ";
    cin >> assignment;
    cout << "Enter your Final Exam score (50%): ";
    cin >> finalExam;

    grade = test + quizz + project + assignment + finalExam;

    cout << "Your total result is " << grade <<'\n';
    if (grade < 30)
    {
        cout << "You got an F.";
    }
    else if (grade >= 30 && grade < 45)
    {
        cout << "You got a D.";
    }
    else if (grade >= 45 && grade < 55)
    {
        cout << "You got a C.";
    }
    else if (grade >= 55 && grade < 60)
    {
        cout << "You got a C+.";
    }
    else if (grade >= 60 && grade < 75)
    {
        cout << "You got a B.";
    }
    else if (grade >= 75 && grade < 80)
    {
        cout << "You got a B+.";
    }
    else if (grade >= 80 && grade < 90)
    {
        cout << "You got an A.";
    }
    else if (grade >= 90 && grade <= 100)
    {
        cout << "You got a A+.";
    }
    else if(grade > 100){
        cout << "Your grade is above the limit 100";
    }
    else if(grade < 30){
        cout << "YOU ARE A FAILURE!";
    }
    else {
        cout << "Invalid input!";
    }
  
    return 0;

}
