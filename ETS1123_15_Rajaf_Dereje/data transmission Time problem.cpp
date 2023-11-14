//this program finds the time it takes to transfer 
#include <iostream>

using namespace std;

int main()
{
    int data;
    double second, minuit, hour, day;
    cout<<"enter number of bytes of your data :";
    cin>>data;
    second = data/960;
    minuit = second /60;
    hour = minuit/60;

    day =hour/24;
    cout<<"the transmission of this file will take : "<<second<< "sec = " <<minuit<< "min = "<< hour<<"hr = "<<day<<"dy ";

    return 0;
}
