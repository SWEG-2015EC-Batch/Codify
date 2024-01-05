/*
This program accepts a two-dimensional array and displays the multiplication
of row elements and the sum of column elements.
*/
#include <iostream>
using namespace std;

int main() {

int C,R;//stands for colomon and row respectivly
cout<<"How many rows and colomons and rows would you like\n";
cout<<"Row: ";
cin>>R;
cout<<"Colom:";
cin>>C;

float numbers[R][C],sum[C][1]={},product[R][1];

for(int i=0; i<R;i++){
    cout<<"\nRow"<<i+1<<"\n";
    product[i][1]={1};
    for(int j=0; j<C;j++){
        cout<<"Colom"<<j+1<<": ";
        cin>>numbers[i][j];
        product[i][1]*=numbers[i][j]; //to multiplly the row elements
        sum[j][1]+=numbers[i][j]; //to add the colomon elements 
    }
}

cout<<"proudct\n";
for(int i=0;i<R;i++){
    cout<<product[i][1]<<"\t"<<endl;
}
cout<<"sum\n";
for(int i=0; i<C;i++){
    cout<<sum[i][1]<<endl;
}

return 0;
}
