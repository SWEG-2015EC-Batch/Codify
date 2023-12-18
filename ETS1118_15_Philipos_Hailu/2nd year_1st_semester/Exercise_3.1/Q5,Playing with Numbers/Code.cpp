#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int swapping,temp,middleNumber,num1, reversedNumber=0,count=0,sum1=0,originalNum,digit,
        productOfEvenNum=1,firstDigit, lastDigit,sum2=0,digit0 = 0, digit1 = 0, digit2 = 0, digit3 = 0, digit4 = 0, 
        digit5 = 0, digit6 = 0, digit7 = 0, digit8 = 0, digit9 = 0,Armstrong,sumOfFactorial=0,sum=0;
    int choice;
    double factorial=1;
    
    
    cout << "which program do you want ?\n";
    cout << "1. Print the reverse\n";
    cout << "2. Count the digits\n";
    cout << "3. Sum of digits\n";
    cout << "4. Product of even digits\n";
    cout << "5. Print the first and last digits and their sum\n";
    cout << "6. Swap first and last digits\n";
    cout << "7. Check if number is paindrom\n";
    cout << "8. Print a frequency of the digits\n";
    cout << "9. Check if a number is Armstrong\n";
    cout << "10. Check if a number is A strong number\n";
    cout << "11. Find the factorial of a number\n";
    cout << "12. Check if a number is perfect\n";
    cout << "Your choise: ";
    cin >> choice;
    
    temp = num1;
    lastDigit = num1%10;
    
    while (num1!=0){
        
        reversedNumber= reversedNumber*10 + num1%10;
        sum1+=(num1%10);
        
        firstDigit=num1;
        while(firstDigit>=10){//finding first digit
            firstDigit/=10;
        }
        
        
        if((num1%10)%2==0){ // identify the even numbers 
            productOfEvenNum*=num1%10;
        }
         //to find the frequency of each digit
        switch (num1%10) {
            case 0: digit0++; break;
            case 1: digit1++; break;
            case 2: digit2++; break;
            case 3: digit3++; break;
            case 4: digit4++; break;
            case 5: digit5++; break;
            case 6: digit6++; break;
            case 7: digit7++; break;
            case 8: digit8++; break;
            case 9: digit9++; break;
            }
        
            
        count++;
        num1/=10;
        
    }
    sum2=lastDigit+firstDigit;
    
    
    switch(choice){
    case 1:
        cout << "Enter a number: ";
        cin >> num1;
        cout << "The reverse of the given number is: " << reversedNumber<<endl;
        break;
    case 2:
        cout << "Enter a number: ";
        cin >> num1;
        cout << "The number of digits of the given number is: " << count<<endl;
        break;
    case 3:
        cout << "Enter a number: ";
        cin >> num1;
        cout << "The sum of the digits of the a given number : " << sum1<<endl;
        break;    
    case 4:
        cout << "Enter a number: ";
        cin >> num1;
        cout << "The product of the even digits of the given number is: " << productOfEvenNum<<endl;
        break;
    case 5:
        cout << "Enter a number: ";
        cin >> num1;
        cout << "The first Digit of the given number is: " << firstDigit<<endl;
        cout << "The last Digit of the given number is: " << lastDigit<<endl;
        cout << "The sum of the first Digit and the last Digit of the given number is: " << sum2<<endl;
    case 6:
        cout << "Enter a number: ";
        cin >> num1;
        //swapping the first and last digits of the the number entered 
        middleNumber = temp/10; // to remove the last digit
        middleNumber= middleNumber%int(pow(10,count-2));// to remove the first
        swapping = (lastDigit*pow(10,count-1)) + middleNumber*10 + firstDigit;
        cout << "The swapping of the Last and first digits of the given number is: " << swapping<<endl;
        break;   
    case 7:
        cout << "Enter a number: ";
        cin >> num1;
            //checking if the given number is palindrome
        if (temp == reversedNumber){
            cout << "The number is a palindrome number"<<endl;
        }
        else{
            cout << "The number is not a palindrome number"<<endl;
        }
        break;
    case 8:
        cout << "Enter a number: ";
        cin >> num1;
        if (digit0 > 0) cout << "  0    |      " << digit0 << endl;
        if (digit1 > 0) cout << "  1    |      " << digit1 << endl;
        if (digit2 > 0) cout << "  2    |      " << digit2 << endl;
        if (digit3 > 0) cout << "  3    |      " << digit3 << endl;
        if (digit4 > 0) cout << "  4    |      " << digit4 << endl;
        if (digit5 > 0) cout << "  5    |      " << digit5 << endl;
        if (digit6 > 0) cout << "  6    |      " << digit6 << endl;
        if (digit7 > 0) cout << "  7    |      " << digit7 << endl;
        if (digit8 > 0) cout << "  8    |      " << digit8 << endl;
        if (digit9 > 0) cout << "  9    |      " << digit9 << endl;
        break;
    case 9: 
        cout << "Enter a number: ";
        cin >> num1;  
        if(num1 > 999 || num1 < 0) {
            return 1;
        }
        middleNumber = temp/10; 
        middleNumber= middleNumber%int(pow(10,count-2));
        Armstrong=pow(firstDigit, 3) + pow(middleNumber, 3) + pow(lastDigit, 3);
        if(temp == (pow(firstDigit, 3) + pow(middleNumber, 3) + pow(lastDigit, 3))){
            cout << "The number you entered is an armstrong number.";
        }
        else{
            cout << "The number you entered is not an armstrong number.";
        }
        break;
    case 10: 
        cout << "Enter a number: ";
        cin >> num1;
        originalNum = num1;

        while (num1 > 0) {
            int digit = num1 % 10;
            int factorial = 1;

            for (int i = 1; i <= digit; i++) {
                factorial *= i;
            }

            sumOfFactorial += factorial;
            num1 /= 10;
        }
        
        if(originalNum == sumOfFactorial){
            cout << originalNum<<" is a strong number\n";
        }
        else{
            cout << originalNum << " is not a strong number\n";
        }
        break;
    case 11: 
        cout << "Enter a number: ";
        cin >> num1;
        for (int i = 1; i <= num1; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << num1 << " is: " << factorial << endl;
        break;
    case 12: 
        cout << "Enter a number: ";
        cin >> num1;
        for(int i = 1; i <= (num1/2); i++){
            if (num1 % i == 0){
                sum += i;
            }
            
        }
        if (sum == num1){
            cout << num1 << " is a perfect number.\n";
        } else {
            cout << num1 << " is not a perfect number.\n";
        }
        break;
    default:
        cout << "error occurred please check your input" << endl;
    }
    return 0;
}
