/*This is a C++ program to calculate the Net-Pay of an employee given base salary and worked hours as inputs it displays net pay after deduction
of pension (7%) and tax.*/

#include<iostream>
using namespace std;

int main(){

    float baseSalary,grossSalary, workHrs, incomeTaxRate, bonusRate=0,overtimePay,netPay, pension,incomeTax;
    float const pensionRate=0.07;
    cout << "Enter your base salary: ";
    cin >> baseSalary;
    cout << "Enter your worked hours: ";
    cin >> workHrs;
    if(workHrs>40){
        cout << "Enter your over time bonus rate: ";
        cin >> bonusRate;
    }
    
    pension=pensionRate*baseSalary;
    overtimePay= bonusRate*(workHrs-40);
    grossSalary=baseSalary-pension+overtimePay;
    
    if(grossSalary<200){
        incomeTaxRate=0;
    }
    else if(grossSalary>=200 && grossSalary<600){
        incomeTaxRate=0.10;
    }
    else if(grossSalary>=600 && grossSalary<1200){
        incomeTaxRate=0.15;
    }
    else if(grossSalary>=1200 && grossSalary<2000){
        incomeTaxRate=0.20;
    }
    else if(grossSalary>=2000 && grossSalary<3500){
        incomeTaxRate=0.25;
    }
    else{
        incomeTaxRate=0.30;
    }
    
    incomeTax=incomeTaxRate*baseSalary;
    netPay=grossSalary-incomeTax;
    
    cout << "your net salary is: " <<netPay;
    
    return 0;
}
