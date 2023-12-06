#include <iostream>

using namespace std;

int main(){

    int num, result = 1;

    cout << "Plese enter a number: ";
    cin >> num;

    while(num != 0){

        if ((num%10)%2 == 0)
        {
            result = (num%10)  * result; 
        }
        
        num/=10;
        
    }

    cout << "The product of the evn numbers is " << result;


    return 0;
    
}
