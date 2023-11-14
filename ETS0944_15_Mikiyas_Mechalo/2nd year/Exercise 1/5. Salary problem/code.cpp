#include <iostream>
//this code is to calculate the gross-salary, net salary and bonus payment given the net salary, bonus payment rate and working hours

using namespace std;

int main (){

    string empName; //employee name
    int workHr, baseS, bonusRt, grossS, bonusP; //Work hour, Base salary, bonus rate, gross salary, bonus payment
    double netS, pensionRate(0.05), taxRate(0.15); //netS = net salary

    cout << "***** Welcome *****\n";
    cout << "Please enter your full name: ";
    getline (cin, empName);
    cout << "Please enter the amout of hours you've worked: ";
    cin >> workHr;
    cout << "Please enter your base salary: ";
    cin >> baseS;
    cout << "Please enter your bonus rate per hour: ";
    cin >> bonusRt;
    cout << '\n';

    grossS = baseS + (workHr * bonusRt * 4); //we multiply by 4 because the work hour is in weeks
    netS = grossS - (grossS * pensionRate) - (grossS * taxRate);
    bonusP = bonusRt * workHr * 4;

    cout << "Dear " << empName << '\n';
    cout << "Your gross salary for this month is: " << grossS << '\n';
    cout << "Your net salary for this month is: " << netS << '\n';
    cout << "Your bonus payment for the month is: " << bonusP <<'\n';
    

    return 0;
}
