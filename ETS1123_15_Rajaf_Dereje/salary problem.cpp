//this program calculate the gross salary, net salary and bonus payment given net salary, bonus payment rate and working hours
#include <iostream>

using namespace std;

int main()
{
string emname;//employee name
int net_s,work_hr, base_S, bonus_Rt,gross_S,bonus_p;//net salary,weekly working hour, base salary, bonus rate, gross salary, bonus payament

cout<<" enter your full name: ";
cin>>emname;
cout<<"enter your base salary : ";
cin>>base_S;
cout<<"enter your working hour: ";
cin>>work_hr;
cout<<"enter your bonus rate: ";
cin>>bonus_Rt;

gross_S = base_S + ( work_hr*bonus_Rt*4);
net_s = gross_S - (gross_S*0.05) - (gross_S*0.05);
bonus_p = bonus_Rt*work_hr*4;

cout<<"your gross salary for this month is: "<<gross_S<<endl;
cout<<"your net salary for this month is: "<<net_s<<endl;
cout<<"your bonus payment for this month is: "<<bonus_p<<endl;


    return 0;
}

