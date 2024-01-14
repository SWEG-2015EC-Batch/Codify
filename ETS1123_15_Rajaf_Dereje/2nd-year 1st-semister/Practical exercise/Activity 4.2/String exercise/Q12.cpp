/*
This program store an answer sheet for a test containing 10 multiple choice
questions. The program should accept the student answer, and print the test score along with
the marked student answer.
*/
#include <iostream>
#include <iostream>
using namespace std;

int main(){

   char answer[10][1], correct[] = {"abdefdacda"};
   char ready;
   int freq(0);

   cout<<"When your ready enter your answer in the following format\n Ans: A";
   cout<<"\nAre you ready(y/n): ";
   cin>>ready;
   ready = tolower(ready);

   if(ready == 'y'){
    for(int i=0; i<10; i++){
        cout<<"Ans "<<i+1<<": ";
        cin>>answer[i][0];
        answer[i][0] = tolower(answer[i][0]);

        if(answer[i][0] != correct[i]){
            freq++;
        }
    }

    cout<<"your marked answers are the following\n\n";

    for(int i=0; i<10; i++){
        if(answer[i][0] == correct[i]){
            cout<<i+1<<". "<<answer[i][0]<<" correct";
        }else{
            cout<<i+1<<". "<<answer[i][0]<<" Incorrect\n   correct answer is "<<correct[i];
        }
        cout<<endl;
    }

     cout<<"\nyour result is "<<(10 - freq)<<" out of 10";
   }

    return 0;
}
