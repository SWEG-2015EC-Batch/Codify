/* tihs programme will calculate net salary of an employee after deduction of pension and tax*/

#include <iostream>
using namespace std;

int main(){

    float basesalary, gs, net_salary, incometaxRate , overtimebonus(0), incometax , pension, overtimebonusrate ;
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
    gs = (basesalary) + overtimebonus;
    
    if (gs < 200){
        incometaxRate = 0;
    }
    else if (gs >= 200 && gs <= 600){
        incometaxRate = .1;
    }
    else if (gs > 600 && gs <= 1200){
        incometaxRate = .15;
    }
    else if (gs > 1200 && gs <= 2000){
        incometaxRate = .20;
    }
    else if (gs > 2000 && gs <= 3500){
        incometaxRate = .25;
    }
    else if (gs > 3500){
        incometaxRate = .30;
    }

    incometax = gs * incometaxRate;
    net_salary = gs - pension - incometax;

    cout << "Your Net-salary is " << net_salary << '.';

    return 0;

}

