#include<iostream>
using namespace std;

int main()
{
    float num1, num2, result;
    char op;// op = operator
    int n;
    do{
   
    cout<< " enter num1: ";
    cin>>num1;
    cout<< " enter num2: ";
    cin>>num2;
    cout<< " enter operator: ";
    cin>>op;
    switch(op){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;    
        case '*':
            result = num1 * num2;  
            break;  
        case '/':
            result = num1 / num2;    
            break;
        default:
            cout<< "error due to unknown operator";    
        }    
        cout<<result <<endl; 
        cout<< "Enter 0 to terminate the program or other integers to continue: ";
        cin>> n;  
        } while (n != 0);
    return 0;
}
