//this program prints squares using same number sequence in every row

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   int row,colom,num,orig;

   cout<<"Enter the number of row: ";
   cin>>row;
   cout<< "Enter the number of colom: ";
   cin>>colom;
   cout<<"by which number should it start: ";
   cin>>num;

   orig = num;

   for(int r=1;r<=row;r++) {
    for(int c=1;c<=colom;c++) {
        cout<<num++<<" ";
    }
    num = orig;
    cout<<endl;
   }
}
