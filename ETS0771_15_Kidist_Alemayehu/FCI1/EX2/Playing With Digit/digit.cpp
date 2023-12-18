/* this programme will display a menu that consist of different cases to choose with*/


#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int select;
    int num, reversedNum = 0, count = 0, sum=0,result=1;
    int firstdigit, lastdigit, number, temp, numDigits= 0;
    int first, last, middle, originalNum;
    int fact = 1, sumOfFact=0, digit, newNumber;

    cout << "1. Print the reverse\n";
    cout << "2. Count the dogits\n";
    cout << "3. Sum of digits\n";
    cout << "4. Product of even integer\n";
    cout << "5. Print first and last digits\n";
    cout << "6. Swap first and last digits\n";
    cout << "7. Check if number is paindrom\n";
    cout << "8. Print a frequency of the digits\n";
    cout << "9. Check if a number is Armstrong\n";
    cout << "10. Check if a number is A strong number\n";
    cout << "11. Find the factorial of a number\n";
    cout << "12. Check if a number is perfect\n";
    cout << "Your choise: ";
    cin >> select;

    switch (select)
    {
    case 1:

        cout << "Enter a number: ";
        cin >> num;

        while(num != 0){
            reversedNum = reversedNum*10 + num%10;
            num /= 10;
        }

        cout << "The reversed number is " << reversedNum << '\n';
        break;
    case 2:
        cout << "Enter a number: ";
        cin >> num;

        while(num != 0){
            num /= 10;
            count++;
        }
        cout << "The number of digits is " << count << '\n';
        break;
    case 3:
        cout << "Enter a number: ";
        cin >> num;

        while(num != 0){
            sum+=(num%10);
            num /= 10;
        }
        cout << "The sum of the digits is " << sum << '\n';
        break;
    case 4:
        cout << "Plese enter a number: ";
        cin >> num;
        while(num != 0){
            if ((num%10)%2 == 0){
                result = (num%10)  * result; 
            }
            num/=10;
        }
        cout << "The product of the evn numbers is " << result;
        break;
    case 5:
        cout << "Plese enter a number: ";
        cin >> num;

        firstDigit = num;

        while(firstDigit >= 10){
            firstDigit /= 10; 
        }

        lastDigit = num % 10; 
        
        cout << "The first numbers is " << firstDigit << "\n";
        cout << "The last numbers is " << lastDigit << '\n';
        cout << "Their sum is " << firstDigit + lastDigit << '\n';
        break;
    case 6:
        cout << "Enter a number: ";
        cin >> number;

        temp = number;
        while (temp != 0) {
            temp /= 10;
            ++numDigits;
        }
        // to handle the case where the number has only one digit
        if (numDigits < 2) {
            cout << "Number has only one digit. No change needed." << '\n';
            return 0;
        }
        firstDigit = number / pow(10, numDigits - 1);     // Extract the first and last digits
        lastDigit = number % 10;

        number %= int(pow(10, numDigits - 1));     // Remove the first and last digits
        number /= 10;
        // Form the new number by switching the first and last digits
        newNumber = lastDigit * pow(10, numDigits - 1) + number * 10 + firstDigit;
        // Output the result
        cout << "Original number: " << number << '\n';
        cout << "Number with first and last digits switched: " << newNumber << '\n';
        break;
    case 7:
        cout << "Enter a number: ";
        cin >> num;

        temp =num;
        while(num != 0){
            reversedNum = reversedNum*10 + num%10;
            num /= 10;
        }
        if (temp == reversedNum){
            cout << "The number is a palindrome number";
        }else{
            cout << "The number is not a palindrome number";
        }
        break;
    case 8:
        
        break;
    case 9:
        cout << "Enter a 3 digit positive number: ";
        cin >> num;

        if(num > 999 || num < 0) {
            cout << "Please input a 3 digit positive number.";
            return 1;
        }
        temp = num;
        last = num % 10;
        middle = num;
        
        for(int i = 0; i<2 ; i++){
            middle = num%10;
            num /= 10;
        }

        while(num != 0){
            first = num % 10;
            num /= 10;
        }

        if(temp == (pow(first, 3) + pow(middle, 3) + pow(last, 3))){
            cout << "The number you entered is an armstrong number.";
        }
        else{
            cout << "The number you entered is not an armstrong number.";
        }
        break;
    case 10:
        cout << "Enter a number: ";
        cin >> num;
        originalNum = num;

        while (num > 0) {
            int digit = num % 10;
            int factorial = 1;

            for (int i = 1; i <= digit; i++) {
                factorial *= i;
            }

            sumOfFact += factorial;
            num /= 10;
        }
        
        if(originalNum == sumOfFact){
            cout << originalNum<<" is a strong number\n";
        }
        else{
            cout << originalNum << " is not a strong number\n";
        }
        break;
    case 11:
        int n;
        cout << "Enter a non-negative integer: ";
        cin >> n;

        if (n < 0) {
            cout << "Factorial is undefined for negative numbers." << endl;
        } else {
            for (int i = 1; i <= n; ++i) {
                result *= i;
            }
            cout << "Factorial of " << n << " is: " << result << endl;
        }
        break;
    case 12:
        cout << "Enter a number: ";
        cin >> number;
        // Ensure the number is positive
        if (number <= 0) {
            cout << "Please enter a positive integer.";
            return 1;
        }
        for (int i = 1; i <= number / 2; ++i) {
            if (number % i == 0) {
                sum += i;
            }
        }
        if (sum == number) {
            cout << number << " is a perfect number.\n";
        } else {
            cout << number << " is not a perfect number.\n";
        }
        break;
    default:
        cout << "Invaid";
        break;
    }


    return 0;
}

