//this program finds the time it takes to transfer n number of bytes
#include <iostream>

using namespace std;

int main()
{
  double data;
   cout<<"enter number of bytes of your data :";
   cin>>data;
   cout<<"the transmission of this file will take : "<<data/960<< "sec = " <<data/57600<< "min = "<< data/3456000<<"hr = "<<data/82944000<<"dy ";

    return 0;
}
