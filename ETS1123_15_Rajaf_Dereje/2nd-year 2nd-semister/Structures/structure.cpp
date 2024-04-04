/*
Write a program that:
Declares an array of Student structures.
Inputs data for multiple students.
Displays the student records.
*/

#include <iostream>
using namespace std;

struct marklist{
    int rollNumber;
    string name;
    float marks;
};

int main(){
    
    int num;
    cout<<"How many students are there: ";
    cin>>num;

    marklist student[num];

    //input user data
    for(int i = 0; i < num; i++){
        cout<<"student "<<i + 1<<endl;
        cout<<"Roll number: ";
        cin>>student[i].rollNumber;
        //to cheak unique Roll number
        if(i > 0){
            bool unique = true;
            do{
                int j = 0;
                for(; j < i; j++){
                   
                    if(student[i].rollNumber == student[j].rollNumber){
                        unique = false;
                        break;
                    }
                    else
                        unique = true;
                }

                if(!unique){
                    cout<<"Your Roll Number is not unique !\n";
                    cout<<"Your have the same Roll Number as the student "<<student[j].name<<endl;
                    cout<<"Enter again: ";
                    cin>>student[i].rollNumber;
                }
            }while(!unique);
        }
        cout<<"Name: ";
        cin.ignore();
        getline(cin , student[i].name);
        cout<<"Mark: ";
        cin>>student[i].marks;
        cout<<endl<<endl;
    }

    marklist exchange;
    //rearrange user data
    for(int i = 0; i < num; i++){
        for(int j = i + 1; j < num; j++){
            if(student[i].rollNumber > student[j].rollNumber){
                exchange = student[i];
                student[i] = student[j];
                student[j] = exchange;
            }
        }
    }

    //to display user data
    cout<<"Roll Number\t\tName\t\tmark\n";
    for(int i = 0; i < num; i++){
        cout<<student[i].rollNumber<<"\t\t"<<student[i].name<<"\t\t"<<student[i].marks;
        cout<<endl;
    }

    return 0;
}
