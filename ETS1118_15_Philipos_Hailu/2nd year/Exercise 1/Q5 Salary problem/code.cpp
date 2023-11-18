
#include <iostream>

int main() {
using namespace std;
string employeeN; //employeeN = employee name
int wWorkHrs, BonusRateperHr, BaseS , BonusP , grossS; // wWorkHrs = weekly working hours, BonusRateperHr = bonus rate per hour, BaseS = base salary , BonusP = bonus payment , grossS = gross-salary
double netS, pensionRate(0.05), taxRate(0.15); //netS = net salary
cout<< "  enter employee name:- ";
cin>>  employeeN;
cout<< "  enter weekly working hours:- ";
cin>>  wWorkHrs;
cout<< "  enter bonus rate per hour:- ";
cin>> BonusRateperHr;
cout<< "  enter base salary:- ";
cin>>  BaseS;
cout << '\n';
grossS = BaseS + ( wWorkHrs * BonusRateperHr * 4); //we multiply by 4 because the work hour is in weeks
netS = grossS - (grossS * pensionRate) - (grossS * taxRate);
BonusP = BonusRateperHr * wWorkHrs * 4;
cout << employeeN << '\n';
cout << "Your gross salary for this month is:- " << grossS << '\n';
cout << "Your net salary for this month is:- " << netS << '\n';
cout << "Your bonus payment for the month is:- " << BonusP <<'\n';

    return 0;
}
