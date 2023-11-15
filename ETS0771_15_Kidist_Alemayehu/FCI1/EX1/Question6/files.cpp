// questin 6 is about calculating how long it takes to calculate 

#include<iostream>
using namespace std;


int main()
{
    int second, minute, hour, day, filesize;
    cout<< " enter the file size in byte: ";
    cin>> filesize;

    second = filesize/960;
    minute = second/60;
    hour = minute/60;
    day = hour/24;

    cout<<" Time in second is: "<< second;
    cout<<" Time in minute is: "<< minute;
    cout<<" Time in hour is: "<< hour;

    return 0;
}
