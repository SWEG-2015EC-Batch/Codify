/*
this program does the following:
a, reverses the inputed number
b, counts the number of inputed digits
c, finds the sum of the inputed digits
d, finds the products of even inputed digits
e, prints the 1st and last digits and finds their sum
f, swaps the 1st and last digits
g, check if the number is palindrome or not
h, find the frequency of each digit
i,check if the number is Armstrong or not
j, check if the number is strong or not
k, check if the number is perfect or not
*/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int choose,temp,
        product(1),
        countt(0), mod, reverseNum(0), num, sum(0),// countt - stands for the number of digits and mid - stands modulo
        _1st(0),last,sumL(0), swape,middleNum,//swape - change first and last digit
        digit0 = 0, digit1 = 0, digit2 = 0, digit3 = 0, digit4 = 0, // variables for the frequency
        digit5 = 0, digit6 = 0, digit7 = 0, digit8 = 0, digit9 = 0,
        armstorngNum(0),
        factorial(1),sumOfFacrotial(0),
        divisors(0);

    cout<< "Enter your digit: ";
    cin>>num;

    //For the switch statement
    cout<< "Choose what you would like to find by entering the corresponding number:\n";
    cout<< "1.Reverse of the number\n2.Number of the digit\n3.Sum of digits\n4.Product of even digits\n";
    cout<< "5.First and last digit and there sum\n6.Swap the first and last digits\n";
    cout<< "7.Check whether the number is palindrome or not\n8. Frequency of the digit in a table\n";
    cout<< "9.Check whether the number is armstrong or not\n10.Check if the number is strong or not\n";
    cout<< "11.Check if the number is  perfect or not\n";
    cout<< "your choice: ";
    cin>>choose;

    temp=num;

    while (num>0) {
        mod = num%10;
        sum += mod; // sum of the digits
        reverseNum = (reverseNum*10) + mod;
        num = num/10;
        countt = ++countt;// number of the digits

        if (mod%2==0) {
            product*=mod; //product of even digits
        }

        //to find the frequency of each digit
        switch (mod) {
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

            //to find the sun of cube of each digit
        armstorngNum += pow(mod%10,3);

           // to find the sun of the factorial of each digit
        for (int i=1;i<=mod;i++) {
            factorial *=i;
            sumOfFacrotial +=factorial;
        }
        }


    _1st = reverseNum%10;// first input digit is the last digit of the reverse
    last = reverseNum/(pow(10,countt - 1));// last input digit is the first digit of the reverse
    sumL = _1st + last;

    middleNum = temp/10; // to remove the last digit
    middleNum%= int(pow(10,countt-2));// to remove the first
    swape = ((last*pow(10,countt-2)) + middleNum)*10 + _1st;

    //To add the divisors of the number
     for (int n=1; n<=(temp/2); n++) {
            if (temp%n==0) {
                divisors+=n;
            }
        }

    switch(choose) {
    case 1:
        cout<< "The reverse of the number is: "<<reverseNum;
        break;
    case 2:
        cout<< "The number of digits of your number is: "<<countt;
        break;
    case 3:
        cout<< "The sum of digits of your number is: "<<sum;
        break;
    case 4:
        cout<< "The product of even digits in your number is: "<<product;
        break;
    case 5:
        cout<< "The first and last digit of your number are "<<_1st<< " and "<<last<< " respectively";
        cout<< "There sum is "<<sumL;
        break;
    case 6:
        cout<< "your new swapped number is: "<<swape;
        break;
    case 7:
        if (temp == reverseNum){
            cout<< "your number is palindrome";
        }
        else {
            cout<< "your number is not palindrome";
        }
        break;
    case 8:
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
        if(temp == armstorngNum) {
            cout<< "your number is an armstrong number";
        }
        else {
            cout<< "your number is not an armstorng number";
        }
        break;
    case 10:
        if (temp == sumOfFacrotial) {
            cout<< "your number is a strong number";
        }
        else {
            cout<< "your number is not a strong number";
        }
        break;
    case 11:
        if (divisors == temp) {
            cout<< "your number is a perfect number";
        }
        else {
            cout<< "your number is not a perfect number";
        }
        break;
    default :
        cout<< "Invalid choice input, please input a correct choice to get a result";
    }

    return 0;
}

