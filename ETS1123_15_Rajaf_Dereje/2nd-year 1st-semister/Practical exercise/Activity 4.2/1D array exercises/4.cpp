/*
This program read and adds equivalent elements of the two-dimensional arrays named first
and second. The program should print the resulting data elements in table form.
*/
#include <iostream>
using namespace std;

int main() {
float first[2][4],second[2][4],sum[2][4];

cout<<"Enter you first array of 2 by 4 dimention\n";
for(int i=0;i<2;i++){
    cin>>first[i][0];
    cin>>first[i][1];
    cin>>first[i][2];
    cin>>first[i][3];   
}

cout<<"Enter the second array of 2 by 4 dimention\n";
for(int i=0;i<2;i++){
    cin>>second[i][0];
    cin>>second[i][1];
    cin>>second[i][2];
    cin>>second[i][3];   
}

for(int j=0;j<2;j++){
    for(int i=0;i<4;i++){
        sum[j][i] = first[j][i] + second[j][i];
    }
}
cout<<"\n\n";

for(int j=0;j<2;j++){
    for(int i=0;i<4;i++){
        cout<<first[j][i]<<"\t"<<second[j][i]<<"\t"<<sum[j][i]<<endl;
    }
}




return 0;
}
