/*
this program tells the net salary from the following inputs
1. base salary
2. worked hours
3. bonus pay rate if work our is > 40
*/
#include <iostream>

using namespace std;

int main() {
    const float pen(0.07);
    float netsalary, workHr, grossSalary, pension, taxRate, tax, bonusRate;
    int baseSalary;

    cout<< "Enter your base salary: ";
    cin>> baseSalary;
    cout<< "Enter the amount of time in hour you've worked this week: ";
    cin>> workHr;
    cout<< "Enter your bonus pay rate: ";
    cin>> bonusRate;

    pension = baseSalary*pen;

    if (workHr>40){

        grossSalary = baseSalary - pension + ((workHr - 40)*bonusRate);
    } else {
        grossSalary = baseSalary - pension;
    }


    netsalary = grossSalary - tax;
    if (grossSalary <=200) {
        tax = grossSalary*taxRate;
        cout<<  "your net salary is "<<netsalary;
    } else if(grossSalary>=200&&grossSalary<600) {
        taxRate = 0.1;
        tax = grossSalary*taxRate;
        cout<<  "your net salary is "<<netsalary;
    } else if (grossSalary>=600&&grossSalary<1200) {
        taxRate = 0.15;
        tax = grossSalary*taxRate;
        cout<<  "your net salary is "<<netsalary;
    } else if (grossSalary>=1200&&grossSalary<2000) {
         taxRate = 0.2;
         tax = grossSalary*taxRate;
        cout<<  "your net salary is "<<netsalary;
    } else if (grossSalary>=2000&&grossSalary<3500) {
         taxRate = 0.25;
         tax = grossSalary*taxRate;
        cout<<  "your net salary is "<<netsalary;
    } else if (grossSalary>3500) {
         taxRate = 0.3;
         tax = grossSalary*taxRate;
        cout<<  "your net salary is "<<netsalary;
    }

    return 0;
}

