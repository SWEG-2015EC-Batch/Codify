/*
This reads the id and total mark of a students’ and print the score level with the mark in tabular
format. Score status level for score >=80 Excellent, >=60 Very Good, >= 50 Fair, >=40 poor and <40 Fail.
*/
#include <iostream>
using namespace std;

int main() {
    
    int N;// stands for the number of students
    
    cout<<"For how many students will you use the program: ";
    cin>>N;
    float marks[N];
    string Ids[N];

    for(int j=0; j<N;j++){
        cout<<"ETS";
        cin>>Ids[j];
        cout<<"Total mark: ";
        cin>>marks[j];
    }

    cout<<"ID\t\tTotal mark\t\tGrade\n";
    for(int i = 0; i<N; i++){
        cout<<"ETS"<<Ids[i]<<"\t\t"<<marks[i]<<"\t\t";
        if(marks[i]>90 && marks[i]<=100){
            cout<<"A";
        }else if(marks[i]>80){
            cout<<"B";
        }else if(marks[i]>70){
            cout<<"C";
        }else if(marks[i]>60){
            cout<<"D";
        }else if(marks[i]>=0 && marks[i]<60){
            cout<<"F";
        }else {
            cout<<"Invalid";
        }
        cout<<endl;
    }

return 0;
}
