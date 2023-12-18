#include <iostream>

using namespace std;

int main(){

int num,revers=0,temp;
cout<< "Enter an integer: " ;
cin>> num;
 int originalNumber=num;
 while(num!=0){
    temp=num%10;
    revers=revers*10+temp;
    num/=10;
 }
 if(originalNumber == revers){
    cout<<"The number is palindrome" ;
 }
 else{
    cout<<"The number is not palindrome" ;
 }
 return 0;
}
