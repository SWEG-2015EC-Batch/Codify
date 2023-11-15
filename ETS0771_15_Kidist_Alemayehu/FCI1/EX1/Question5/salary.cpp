#include<iostream>
using namespace std;

/* question number 5, calculating gross salary, net salary and
    monthly bonus payment of an employee*/

int main()
{
    string employee; 
    double hour, bonus, Bsalary, dailybonus, netsalary, pension, incometax,grossalary;
    
    cout<<" Enter employee name: "<<endl;
    cin>>employee;
    cout<<" enter weekly workin hour: "<<endl;
    cin>>hour;
    cout<<"Enter the amount of bonus per hour you earn: "<<endl;
    cin>>bonus;
    cout<<"enter you base salary: "<<endl;
    cin>>Bsalary;
    
    dailybonus= hour/5 * bonus;
    grossalary = Bsalary + 20 * dailybonus;
    pension = grossalary * 0.05;
    incometax= grossalary * 0.15;
    netsalary = grossalary - pension - incometax;

    cout<<" your monthly bonus amount is: "<<dailybonus * 20<<endl;
    cout<<" your monthly gross salary is: "<<grossalary<<endl;
    cout<<" your monthly net salary is: "<< netsalary;

    return 0;
}

