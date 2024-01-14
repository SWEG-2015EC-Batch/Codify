//a program to store exam scores (test, assignment, quiz, project and final). The program determine and print the score level alongside with the total mark in tabular format.
#include <iostream>
using namespace std;
int main(){
    
    int numStudent;
    cout<<"Enter the number of students: ";
    cin>>numStudent;

    int scores[numStudent][5],totalMark[numStudent], countOFTotalMark, tempSum = 0 ,count = 1;
    string scoreLevel[numStudent];

    //i = row and j = columns , recive inputs of results
    for (int i = 0; i < numStudent; i++){     

        cout<<"Enter the test result out of 10%: ";
        cin>> scores[i][0];
        cout<<"Enter the assignment result out of 15%: ";
        cin>> scores[i][1];
        cout<<"Enter the quiz result out of 5%: ";
        cin>> scores[i][2];
        cout<<"Enter the project result out of 20%: ";
        cin>> scores[i][3];
        cout<<"Enter the final result out of 50%: ";
        cin>> scores[i][4];  
        //to find total mark of each student out of 100%
        tempSum = scores[i][0] + scores[i][1] + scores[i][2] + scores[i][3] + scores[i][4];
        totalMark[i] = tempSum;
        tempSum = 0;// reset the value
        
    }

    //to find and sore the score level of each students total mark

    for (int i = 0; i < numStudent; i++){

        if ( totalMark[i] > -1 && totalMark[i] < 40){
            scoreLevel[i] = "Fail";
        }

        else if(totalMark[i] >= 40 && totalMark[i] < 50){
            scoreLevel[i] = "Poor";
        }

        else if(totalMark[i] >= 50 && totalMark[i] < 60){
            scoreLevel[i] = "Fair";
        }

        else if(totalMark[i] >= 60 && totalMark[i] < 80){
            scoreLevel[i] = "Very Good";
        }

         else if(totalMark[i] >= 80 && totalMark[i] <= 100){
            scoreLevel[i] = "Excellent";
        }

        else{
            scoreLevel[i] = "error "; 
            
        }
        
    }
    
    // prints out the total mark and score level
    cout<<"Students"<<"\t"<<"Total Mark(100%)"<<"\t"<<"Score Level"<<endl;
    for (int i = 0; i < numStudent; i++){

        cout<<"student num"<<count++ <<"\t:\t"<<totalMark[i]<<"\t:\t"<<scoreLevel[i]<<endl;

    }
    
    return 0;
}
