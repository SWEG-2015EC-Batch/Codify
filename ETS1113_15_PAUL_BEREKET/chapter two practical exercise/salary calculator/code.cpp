#include <iostream>
using namespace std;

int main()
 {

    string employee_name;
    float weekly_working_hours, bonus_rate_per_hour, base_salary;

    cout << "Enter employee name: ";
    cin >> employee_name;
    cout << "Enter weekly working hours: ";
    cin >> weekly_working_hours;
    cout << "Enter bonus rate per hour: ";
    cin >> bonus_rate_per_hour;
    cout << "Enter base salary: ";
    cin >> base_salary;

    float gross_salary = weekly_working_hours * base_salary;

    // calculate bonus payment
    float bonus_payment = weekly_working_hours * bonus_rate_per_hour;

    //  Calculate pension deduction
    float pension_rate = 0.05;
    float pension_deduction = gross_salary * pension_rate;

    //  Calculate tax deduction
    float tax_rate = 0.15;
    float tax_deduction = gross_salary * tax_rate;

    //  Calculate net salary
    float net_salary = gross_salary - (pension_deduction + tax_deduction);

    //  Display results
    cout << "Employee Name: " << employee_name << endl;
    cout << "Gross Salary: " << gross_salary << endl;
    cout << "Bonus Payment: " << bonus_payment << endl;
    cout << "Pension Deduction: " << pension_deduction << endl;
    cout << "Tax Deduction: " << tax_deduction << endl;
    cout << "Net Salary: " << net_salary << endl;

    return 0;
 }

