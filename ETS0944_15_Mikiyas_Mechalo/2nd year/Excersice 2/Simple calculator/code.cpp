#include <iostream>

using namespace std;

int main(){

    int exit;
    float x, y;
    char operators;


    do {
        cout << "***** CALCULATOR *****\n";
        cout << "Enter the first number: ";
        cin >> x;
        cout << "Enter an operator +, -, *, /: ";
        cin >> operators;
        cout << "Enter the second number: ";
        cin >> y;

        switch (operators)
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
            cout << "Wrong operator!\n";
            break;
        }

        cout << "Enter any key to continue or 0 to exit: ";
        cin >> exit;
        if(exit != 0)    cout << '\n';

    }while (exit!=0);

    return 0;
}


