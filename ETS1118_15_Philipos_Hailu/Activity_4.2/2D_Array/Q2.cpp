//a C++ program to that accepts a two-dimensional array and displays the multiplication
of row elements and the sum of column elements.
#include <iostream>
using namespace std;
int main(){

    int r,c;//r= row, c= column
    cout<<"Enter the row: ";
    cin>>r;
    cout<<"Enter the column: ";
    cin>>c;

    int numbers[r][c],count = 1, multiplication[r],sum[c],multipleOfRow = 1, sumOfColumn = 0;
    for(int i = 0; i < r; i++){
    for (int j = 0; j < c; j++){
        cout<<"Enter element num"<<count++<<": ";
        cin>>numbers[i][j];   
    }
   }
    //i = row , j = column, calculates the sum of each columns and also pints out the values of the rows and columns in a tabular format
    for(int i = 0; i < r; i++){
        
    for (int j = 0; j < c; j++){
        cout<<numbers[i][j]<<"\t";
        sumOfColumn+=numbers[i][j] ;   
    }

    sum[i] = sumOfColumn;
    sumOfColumn = 0; //reset the value of multipleOfRow to 0

   cout<<endl; 
   }

   //j = column , i = row , calculates the multiplication of each rows
   for (int j = 0; j < c; j++){
        
    for(int i = 0; i < r; i++){
        
        multipleOfRow*=numbers[i][j];   
    }
    multiplication[j] = multipleOfRow;
    multipleOfRow = 1; //reset the value of multipleOfRow to 1
    
   cout<<endl; 

   }

    // prints out the values of the sum of each rows
    cout<<"the sum of the rows are: "<<endl;
    for (int i = 0; i < r; i++){
    cout<< sum[i]<<endl;
    }

    cout<<endl;

    // prints out the values of the multiplication of each columns
    cout<<"the multiplication of the columns are: ";
    for (int j = 0; j < c; j++){
    cout<< multiplication[j]<<", ";
    }
    cout<<endl;
    return 0;
}
