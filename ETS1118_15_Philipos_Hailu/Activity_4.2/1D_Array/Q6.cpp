//a program that read total mark of a students’ and print the score level with the mark in tabular format.
#include <iostream>
using namespace std;
int main(){

    int num,count = 1;
    

    cout<< "Enter number of subjects: ";
    cin>>num;
   
   int totlMark[num];
   string scoreLevel[num];


    for (int i = 0; i < num; i++){
        
        cout<< "Enter total mark of subject " <<count++<<": ";
        cin>>totlMark[i];
        if (totlMark[i] < 40){
            scoreLevel[i] = "Fail";
        }

        else if(totlMark[i] >= 40 && totlMark[i] < 50){
            scoreLevel[i] = "Poor";
        }

        else if(totlMark[i] >= 50 && totlMark[i] < 60){
            scoreLevel[i] = "Fair";
        }

        else if(totlMark[i] >= 60 && totlMark[i] < 80){
            scoreLevel[i] = "Very Good";
        }

         else if(totlMark[i] >= 80 && totlMark[i] <= 100){
            scoreLevel[i] = "Excellent";
        }

        else{
            scoreLevel[i] = "error "; 
            
        }
        
    }
    
    count = 1;// reset the value of count to 1
    cout<< ":\t" << "Subjects " << "\t:\t" << "Total mark" << "\t:\t" << "Score Level" <<" \t:"<<endl;
    for (int j= 0; j < num; j++){ 
        cout<< ":\t" << "subject " << count++<< "\t:"<< totlMark[j] << "\t\t\t:"<<scoreLevel[j]<<"\t\t\t:"<<endl;
        
    } 

    return 0;
}
