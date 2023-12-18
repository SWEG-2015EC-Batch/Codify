#include<iostream>
using namespace std;

int main(){
    int result, testResult, quizResult, projectResult,finalExamResult ,assignmentResult;
    
    cout << "Enter your test result out of 15%: " << endl;
    cin >> testResult;
    cout << "Enter your quiz result out of 5%: " << endl;
    cin >> quizResult;
    cout << "Enter your project result out of 20%: " << endl;
    cin >> projectResult;
    cout << "Enter your assignment result out of 10%: " << endl;
    cin >> assignmentResult;
    cout << "Enter your final exam result out of 50%: " << endl;
    cin >> finalExamResult;
    
    result=testResult+quizResult+projectResult+assignmentResult+finalExamResult;
    
    if(result>=90){
        cout << "you got an A+" << endl;
    }
    else if(result>=80){
        cout << "you got an A" << endl;
    }
    else if(result>=75){
        cout << "you got a B+" << endl;
    }
    else if(result>=60){
        cout << "you got a B" << endl;
    }
    else if(result>=55){
        cout << "you got a C+" << endl;
    }
    else if(result>=45){
        cout << "you got a C" << endl;
    }
    else if(result>=30){
        cout << "you got a D" << endl;
    }
    else{
        cout << "you got an F" << endl;
    }
    return 0;
}
