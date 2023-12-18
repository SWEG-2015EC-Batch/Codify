#include <iostream>

using namespace std;

int main(){

    int test, quiz, project, assignment, finalExam, totalResult;

    //read valid test result

    do{
            cout<<"input valid (<=15) test result: ";
            cin>>test;

            if(test<0 || test>15){
                    cout<<"your test result have to be 15 or under 15\n"<<endl;;
            }
    }while(test<0 || test>15);


     //read valid project result

    do{
            cout<<"input valid (<=20) project result: ";
            cin>>project;

            if(project<0 || project>20){
                    cout<<"your project result have to be 20 or under 20\n"<<endl;;
            }
    }while(project<0 || project>20);

 //read valid quiz result

    do{
            cout<<"input valid (<=5) quiz result: ";
            cin>>quiz;

            if(quiz<0 || quiz>5){
                    cout<<"your quiz result have to be 5 or under 5\n"<<endl;;
            }
    }while(quiz<0 || quiz>5);

    //read valid assignment result

    do{
            cout<<"input valid (<=10) assignment result: ";
            cin>>assignment;

            if(assignment<0 || assignment>10){
                    cout<<"your assignment result have to be 10 or under 10\n"<<endl;;
            }
    }while(assignment<0 || assignment>10);

    //read valid final result

    do{
            cout<<"input valid (<=50) final eaxm result: ";
            cin>>finalExam;

            if(finalExam<0 || finalExam>50){
                    cout<<"your fianl exam result have to be 50 or under 50\n"<<endl;
            }
    }while(finalExam<0 || finalExam>50);
      totalResult = test + quiz + project + assignment + finalExam;
    cout<<"\n your total result is "<<totalResult<<endl;

 if(totalResult>=90) {
            cout<<"your gade result is A+"<<endl;

         }

        else if(totalResult>=85&& totalResult<90){
            cout<<"your grade result is A"<<endl;

        }

        else if (totalResult>=80&& totalResult<85){
            cout<<"your garde result is A-"<<endl;

        }
        else if(totalResult>=75&& totalResult<80){
            cout<<"your garde result is B+"<<endl;

        }
        else if (totalResult>=70&& totalResult<75){
            cout<< "your grade result is B"<<endl;

        }
        else if(totalResult>=65&& totalResult<70){
            cout<< "your grade result is B-"<<endl;

        }
        else if(totalResult>=60&& totalResult<65){
            cout<< "your grade result is c+"<<endl;

        }
        else if(totalResult>=55&& totalResult<60){
            cout<< "your grade result is c"<<endl;

        }
        else if(totalResult>=50&& totalResult<55){
            cout<< "your grade result is c-"<<endl;

        }
        else{
            cout<< "your grade result is F"<<endl;

        }


    return 0;
}

