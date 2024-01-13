// Design a program that store an answer sheet for a test containing 10 multiple choice
// questions. The program should accept the student answer, and print the test score along with
// the marked student answer.
#include <iostream>
#include <cstring> 
using namespace std;

int main() {

    char answers[]={'A', 'B','C', 'D', 'D', 'C', 'B', 'D', 'A', 'B'};

    char answerTry[10];
    int score =0;

    for (int i=0; i<10; i++){
        cout << "Enter answer for Q #" << i+1 << ": ";
        char temp;
        cin >> temp;
        answerTry[i]= char(toupper(temp));
        if(answerTry[i]==answers[i]){
            score++;
        }
    }

    cout << "\nYour answers are: ";

    for(int i =0; i <10; i++){
        cout << answerTry[i];
        if (i!=9) cout << ", ";
    }
    cout << "\nThe correct answers are: ";

    for(int i =0; i <10; i++){
        cout << answers[i];
        if (i!=9) cout << ", ";
    }

    cout << "\nYou scored " << score << " out of 10";



    return 0;
}
