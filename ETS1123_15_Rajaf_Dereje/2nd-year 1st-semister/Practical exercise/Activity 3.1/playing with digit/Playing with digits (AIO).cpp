//this program plays with numbers as described in the output on line 8
#include<iostream>
#include<cmath>
using namespace std;

int main(){

    cout<< "a) Prints the reverses of the number (e.g. input = 4637215 Output=5217364).\n"
            <<"b) Counts the number of digits in a given number (e.g. 23,498 has five digits)\n"
            <<"c) Find the sum of the digits of the a given number (e.g. input=4,823 sum=17)\n"
            <<"d) Find the product of even digits of the a given number (e.g. input=4,923 prod=8)\n"
            <<"e) Prints the first and the last digit of the number and find their sum.\n"
            <<"f) Swap the first and the last digit of the number.\n"
            <<"g) Check whether a number is palindrome or not.\n"
            <<"h) Find the frequency of each digit in a given integer and print in table format.\n"
            <<"i) Check if a number is Armstrong or not.\n"
            <<"[Hint]: An Armstrong number of three digits is an integer such that the sum of the cubes\n"
            <<"of its digits is equal to the number itself\n"
            <<"j) Check if a number is Strong or not.\n"
            <<"[Hint]: A Strong number is a number, where the sum of the factorial of the digits is equal\n"
            <<"to the number itself.\n"
            <<"k) Check whether a number is Perfect number or not.\n"
            <<"[Hint]: A Perfect Number is an integer where the sum of its divisors minus the number\n"
            <<"itself equals the number.\n"
            <<"x) Exit the program\n";

    char chooice;
    cout<< "\nEnter your choice: ";
    cin>>chooice;
    chooice = tolower(chooice);

    int num, modlar, Sum, countt[10]={0};
    int orignal; //holds the original number
    int First, Last;  //to hold first and last digits of a number
    int factorial(1);
    while(chooice != 'x'){

        cout<< "Enter number: ";
        cin>>num;
        orignal = num;
        Sum = 0;

        switch(chooice){
            case 'a':
                //Prints the reverses of the number.
                while(num!=0){
                    modlar = num%10;
                    Sum = (Sum + modlar)*10;
                    num /= 10;
                }
                cout<<  "Reversed number: "<<Sum/10;
                break;

            case 'b':
                 //Counts the number of digits in a given number.
                do{
                    Sum++;
                    num /= 10;
                }while(num != 0);
                cout<<Sum<< " digits";
                break;

            case 'c':
                //Find the sum of the digits of the a given number.
                 while(num != 0){
                    modlar = num%10;
                    Sum += modlar;
                    num /= 10;
                }
                cout<< "Sum of the digits: "<<Sum;
                break;

           case 'd':
                //Find the product of even digits of the a given number.
                Sum = 1; // Initialize Sum to 1 for multiplication
                do{
                    countt[0]++; //count the number of digits
                    modlar = num % 10;
                    if (modlar % 2 == 0){
                        countt[1]++; //count the number if even digits
                        Sum *= modlar;
                    }
                    num /= 10; // Update num to move to the next digit
                }while (num != 0);

                if(countt[0]>1){
                   if(countt[1]>1)
                        cout<< "Product of even digits: " << Sum;
                   else
                        cout<< "Product does not exist. only one even digit found.";
                }
                else
                    cout<< "Product does not exist. only one digit found.";
                break;

            case 'e':
                //Prints the first and the last digit of the number and find their sum.
                do{
                    countt[0]++;
                    num/=10;
                }while(num!=0);

                num = orignal; //gives the updated number its original value
                if(countt[0]==1)
                    cout<< "First number = last number : "<<num;
                else{
                    cout<< "last number: "<<num%10;
                    num/=pow(10,countt[0]-1); //To separate the first digit
                    cout<< "\nFirst number: "<<num;
                }
                break;

            case 'f':
                //Swap the first and the last digit of the number.
                do{
                    countt[0]++;
                    num /= 10;
                }while(num != 0);

                num = orignal; //Restores the original number
                Last = num % 10;
                First = num / pow(10, countt[0] - 1);
                num = num - First * pow(10, countt[0] - 1); // Remove first digit
                num = num - Last + First; // Remove last digit and add first digit
                num = num + Last * pow(10, countt[0] - 1); // Add last digit at the first position
                cout << "Number after swapping first and last digits: " << num;
                break;

            case 'g':
                //Check whether a number is palindrome or not.
                while(num != 0){
                    modlar = num %10;
                    Sum = (Sum + modlar) * 10;
                    num /= 10;
                }
                if(Sum/10 == orignal)
                    cout<< "Number is palindrome.";
                else
                    cout<< "Number is not palindrome";
                break;

            case 'h':
                //Find the frequency of each digit in a given integer and print in table format.
                while(num != 0){
                    modlar = num % 10;
                    countt[modlar]++;
                    num /= 10;
                }

                cout<< "Digit\tFrequency\n";
                for(int i=0; i<10; i++){
                    if(countt[i]>0)
                        cout<<i<< "\t\t"<<countt[i]<<endl;
                }
                break;

            case 'i':
                //Check if a number is Armstrong or not.
                do{
                    countt[0]++;
                    num /= 10;
                }while(num != 0);

                num = orignal; //restore the original number
                while(num != 0){
                    modlar = num % 10;
                    Sum += pow(modlar, countt[0]);
                    num /= 10;
                }

                if(orignal == Sum)
                    cout<< "Number is Armstrong.";
                else
                    cout<< "Number is not Armstrong.";

                break;

            case 'j':
                //Check if a number is Strong or not.
                while(num > 0){
                    modlar = num % 10;
                    while(modlar > 0){
                        factorial *= modlar;
                        modlar--;
                    }
                    Sum += factorial;
                    factorial  = 1;
                    num /= 10;
                }

                if(orignal == Sum)
                    cout<< "Number is strong.";
                else
                    cout<< "Number is not strong";

                break;

            case 'k':
                //Check whether a number is Perfect number or not.
                for(int i = 1; i <= num/2; i++){
                    if(num % i == 0){
                        Sum += i; //sum of divisors of the number
                    }
                }
                if(num == Sum)
                    cout<< "Number is perfect number.";
                else
                    cout<< "Number is not perfect number.";
                break;

            default :
                cout<< "Invalid choice";
                break;
        }

        for(int i = 0; i < 10; i++){
                countt[i] = 0;        //to reset the values again for another operation
        }
        Sum = 0;

        cout<< "\n\nEnter your choice: ";
        cin>>chooice;
    }
    return 0;

}
