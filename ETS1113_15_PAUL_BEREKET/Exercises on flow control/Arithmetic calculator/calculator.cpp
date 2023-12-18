#include <iostream>
using namespace std;

int main() {
    char operatorr;
    int exi;
    double num1, num2, result;
do{

    cout << "Enter an operatorr (+, -, *, /): ";
    cin >> operatorr;

    cout << "Enter the first number: ";
    cin >> num1 ;
    cout<<"Enter the second number: " ;
    cin>>num2;

    switch (operatorr) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << result<<endl;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << result<<endl;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << result<<endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result: " << result<<endl;
            } else {
                cout << "Error: Division by zero!"<<endl;
            }
            break;
        default:
            cout << "Invalid operator!"<<endl;

}
    cout<<"Enetr zero to exit or enter other number to continue: ";
    cin>> exi;
    }while(exi!=0);

    return 0;
}
