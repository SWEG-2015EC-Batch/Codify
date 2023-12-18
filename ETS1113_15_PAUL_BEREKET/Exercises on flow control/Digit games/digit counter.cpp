#include <iostream>

using namespace std;

int main()
{
 int num,counter=0 ;
 cout<<"Enter an integer: ";
 cin>>num;
 while(num!=0){
    num/=10;
    counter++;

 }
 cout<<"The number of digit(s) is/are "<<counter;

    return 0;
}

