//this programme will display simple calculator

#include <iostream>
using namespace std;

int main(){

    int exit;
    float x, y;
    char operatoor;


    do {
        cout << "Enter the num1: ";
        cin >> x;
        cout << "Enter an operator +, -, *, /: ";
        cin >> operatoor;
        cout << "Enter the num2: ";
        cin >> y;

        switch (operatoor)
        {
        case '+':
            cout << "The result is " << x + y <<'\n';
            break;
        case '-':
            cout << "The result is " << x - y <<'\n';
            break;
        case '*':
        case 'x':
        case 'X':
            cout << "The result is " << x * y <<'\n';
            break;
        case '/':
            cout << "The result is " << x / y <<'\n';
            break;
        
        default:
            cout << "invalid \n";
            break;
        }

        cout << "Enter any key to continue or 0 to exit: ";
        cin >> exit;
        if(exit != 0)    cout << '\n';

    }while (exit!=0);

    return 0;
}
