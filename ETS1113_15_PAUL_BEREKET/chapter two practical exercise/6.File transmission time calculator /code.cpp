//This program calculates the total required time to transmit a certain amount of file

#include <iostream>
using namespace std;

int main() {
    int transmissionRate = 960; // characters per second
    cout<<" enter the file size in byte:" ;
    int sizeInByte ;  // file size in bytes
    cin >> sizeInByte ;

    int timeInSeconds = sizeInByte / transmissionRate;
    int hours = timeInSeconds / 3600;
    int minutes = (timeInSeconds % 3600) / 60;
    int seconds = timeInSeconds % 60;

    cout << "It will take " << hours << " hours, " << minutes << " minutes, and " << seconds << " seconds to send the file." << endl;

    return 0;
}
