//this code calculates the Body mass index by accepting mass and height 
#include <iostream>

using namespace std;

int main(){

    float basesalary, grossalary, netsalary, incometaxRate , overtimebonus(0), incometax , pension, overtimebonusrate ;
    int whorkhour;
    const float pensionrate = 0.07;
    cout<< "Enter base salary: ";
    cin>> basesalary;
    cout<< "Enter working hours: ";
    cin>> whorkhour;
    cout<< "Enter over time bonus rate: ";
    cin>> overtimebonusrate;

    pension = pensionrate * basesalary;

    if (whorkhour > 40){
        overtimebonus = overtimebonusrate * (whorkhour - 40);
    }
    grossalary = (basesalary) + overtimebonus;
    
    if (grossalary < 200){
        incometaxRate = 0;
    }
    else if (grossalary >= 200 && grossalary <= 600){
        incometaxRate = .1;
    }
    else if (grossalary > 600 && grossalary <= 1200){
        incometaxRate = .15;
    }
    else if (grossalary > 1200 && grossalary <= 2000){
        incometaxRate = .20;
    }
    else if (grossalary > 2000 && grossalary <= 3500){
        incometaxRate = .25;
    }
    else if (grossalary > 3500){
        incometaxRate = .30;
    }

    incometax = grossalary * incometaxRate;
    netsalary = grossalary - pension - incometax;

    cout << "\nYour salary for the month is " << netsalary << '.';




    return 0;

}
