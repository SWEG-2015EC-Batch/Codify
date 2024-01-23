/*
Develop a program that declares and initializes a one-dimensional int array named nums.
The program should read array elements and then multiply by 2 the elements located by even
index and then store it on another int array named dNums. You are free to determine the
size of the array.
*/
#include <iostream>
#include <math.h>

using namespace std;

int main()
{

   int n,countt(0);
   cout<< "Enter how many numbers you will enter";
   cin>>n;

   int nums[n];

   for(int i=0; i<n; i++){
    cin>>nums[i];
    if(i%2==0){
        countt++; // to determine the dimention for the dnums array
    }
   }

   int dnums[countt],j(0);
   for(int i=0;i<n;i++){
    if(i%2==0){

        dnums[j] = 2*nums[i];
        j++;
    }
   }

   for(int i=0; i<countt; i++){
    cout<<dnums[i]<<' ';
   }
    return 0;
}
