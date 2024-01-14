// a program to declare a 4-by-5 array of integers
#include <iostream>
using namespace std;
int main(){

   int intigers[5][4]={16,22,99,4,18,-258,4,101,5,98,105,6,15,2,45,33,88,72,16,3};// Q1 of activity 4.2 chere google classroom
   //row =i and column= j
   for(int i = 0; i < 5; i++){
    for (int j = 0; j < 4; j++){
        cout<<intigers[i][j]<<"\t";   
    }
   cout<<endl; 

   }

    return 0;
}
