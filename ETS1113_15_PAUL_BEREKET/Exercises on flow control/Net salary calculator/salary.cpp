#include <iostream>
using namespace std;

int main() {
    double pensionRate=7, grossSalary, workedHours, taxRate, overtimeBonusRate;
    cout << "Enter the gross salary: ";
    cin >> grossSalary;
    cout << "Enter the worked hours: ";
    cin >> workedHours;

    double pension = (grossSalary * pensionRate) / 100;

    if (grossSalary > 0 && grossSalary < 200) {
        taxRate = 0;
    }
    else if (grossSalary >= 200 && grossSalary < 600) {
        taxRate = 10;
    }
    else if (grossSalary >= 600 && grossSalary < 1200) {
        taxRate = 15;
    }
    else if (grossSalary >= 1200 && grossSalary < 2000) {
        taxRate = 20;
    }
    else if (grossSalary >= 2000 && grossSalary < 3500) {
        taxRate = 25;
    }
    else {
        taxRate = 30;
    }

    double incomeTax = (grossSalary * taxRate) / 100;
    double netSalary = grossSalary - pension - incomeTax;

    if (workedHours > 40) {
        cout << "Enter the overtime bonus rate per hour: ";
        cin >> overtimeBonusRate;
        double extraHours = workedHours - 40;
        double overtimePayment = extraHours * overtimeBonusRate;
        netSalary += overtimePayment;
        cout<<"Over time payment: "<<overtimePayment<<endl;
    }
    cout<<"TAX rate: "<<taxRate<<"%"<<endl;
    cout<< "total tax: "<<incomeTax<<endl;
    cout<<"pension: "<<pension<<endl;
    cout << "Net Salary: " << netSalary << endl;

    return 0;
}

