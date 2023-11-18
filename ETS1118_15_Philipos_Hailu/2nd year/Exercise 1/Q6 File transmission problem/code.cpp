// a program that calculates how long it will take to send a file, given the file size in bytes 
#include <iostream>

int main() {
   using namespace std;
   int FsizeInBytes, TimeinSec ;//FsizeInBytes = file size in bytes,TimeinSec = time it takes to send a file in seconds
   cout<<" enter the file size in bytes:- ";
   cin>> FsizeInBytes;
   TimeinSec = FsizeInBytes/960;
   cout<<"the time it takes to send a file in seconds is:- "<< TimeinSec;

    return 0;
}
