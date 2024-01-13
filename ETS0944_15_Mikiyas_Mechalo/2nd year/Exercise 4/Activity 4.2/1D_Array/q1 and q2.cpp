#include <iostream>

using namespace std;

int main(){

    // question #️⃣1️⃣

    int array1[4][5] = {16, 22, 99, 4, 18, -258, 4, 101, 5, 98, 105, 6, 15, 2, 45, 33, 88, 72, 16, 3};

    // question #️⃣2️⃣
    
    int temp [8] , total = 0;

    for (int i = 0; i < 8; i++){
        cout << "Enter temprature #" << i+1 << ": ";
        cin >> temp[i];
        total+=temp[i];
    }

    cout << "The sum of the temptratures is " << total << '\n';
    cout << "The average of the tempratures is " << total/8.0;
    



    return 0;
    
}
