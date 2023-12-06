#include <iostream>

using namespace std;

int main(){

    folat grade;

    cout << "What is your score?: ";
    cin >> grade;

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
