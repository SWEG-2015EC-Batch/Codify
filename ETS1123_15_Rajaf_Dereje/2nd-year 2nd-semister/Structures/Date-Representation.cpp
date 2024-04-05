/*
This program
=> Inputs a date.
=> Validates the date (e.g., no negative day/month, valid month range).
=> Displays the date in a user-friendly format (e.g., “April 15, 2024”).
*/
#include <iostream>
using namespace std;

struct date{
    int day, month, year;
};

string Month_name(int mon);
void fail_check(int &);
void range_check(int & , int *);

int main(){

    date today;

    cout<<"Enter todays date\n";

    cout<<"Day: ";
    cin>>today.day;
    fail_check(today.day);
    range_check(today.day , &today.day);

    cout<<"Month: ";
    cin>>today.month;
    fail_check(today.month);
    range_check(today.month, &today.day);

    cout<<"Year: ";
    cin>>today.year;
    fail_check(today.year);

    cout<<"The date today is : "<<Month_name(today.month)<<' '<<today.day<<','<<today.year;

    return 0;
}

void fail_check(int &integer){
    while(cin.fail()){
        cin.clear();
        cin.ignore();
        cout<<"Incorrect Data Input\n";
        cout<<"Enter again: ";
        cin>>integer;
    }
}

void range_check(int &range, int *ptr){
    if(&range == ptr){
        while(range > 31 || range < 1){
            cout<<"You're out of range!\n Day  should be between 1 - 30\n";
            cout<<"Enter again: ";
            cin>>range;
        }
    }else{
        while(range > 12 || range < 1){
            cout<<"You're out of range!\n Month should be between 1 - 12\n";
            cout<<"Enter again: ";
            cin>>range;
        }
    }
}

string Month_name(int month){
    switch(month){
        case 1:
            return "January";
            break;
        case 2:
            return "February"; 
            break;
        case 3:
            return "March"; 
            break;
        case 4:
            return "April"; 
            break;
        case 5:
            return "May"; 
            break;
        case 6:
            return "June"; 
            break;
        case 7:
            return "July" ;
            break;
        case 8:
            return "August"; 
            break;
        case 9:
            return "September"; 
            break;
        case 10: 
            return "October";
            break;
        case 11:
            return "November";
            break;
        case 12:
            return "December";
            break;
        default:
            return "Month doesn't exist in geregorian calander";
    }
}
