// a program that reads the N person full name mid exam and find the total and the mid and final should be stored in the program also print the full name and total in tabular format
#include<iostream>
using namespace std;

int main(){
int N;
//N by 3 colomn
cout<<"enter the number of students:";
cin>>N;
string fullName[N];
int result[N][3];

    for(int i=0; i<N; i++){

    cout<<"Enter full name: ";
    // cin.getline(FullName);
    cin>>fullName[i];

    cout<<"Enter mid-exam: ";
    cin>>result[i][0];

    cout<<"Enter final-exam: ";
    cin>>result[i][1];

    result[i][2]=result[i][0] + result[i][1];


    
}
cout<<"Full name: "<<"Mid-Exam: "<<"\tfinal-Exam: "<<"\ttotal result is; "<<endl;
for(int i=0;i<N;i++){
    cout<<fullName[i]<<"\t"<<result[i][0]<<"\t"<<result[i][1]<<"\t"<<result[i][2]<<endl;
}
return 0;
}

