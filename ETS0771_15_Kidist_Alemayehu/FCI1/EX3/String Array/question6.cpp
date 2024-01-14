#include <iostream>
using namespace std;

int main() {
    int numStudents;
    cout << "Enter the number of students: ";
    cin >> numStudents;

    int marks[numStudents];
    string levels[numStudents];

    for (int i = 0; i < numStudents; i++) {
        cout << "Enter total marks for student " << i+1 << ": ";
        cin >> marks[i];

        if (marks[i] >= 80) {
            levels[i] = "Excellent";
        } else if (marks[i] >= 60) {
            levels[i] = "Very Good";
        } else if (marks[i] >= 50) {
            levels[i] = "Fair";
        } else if (marks[i] >= 40) {
            levels[i] = "Poor";
        } else {
            levels[i] = "Fail";
        }
    }

    cout << "\nScore\tLevel" << endl;
    for (int i = 0; i < numStudents; i++) {
        cout << marks[i] << "\t" << levels[i] << endl;
    }

    return 0;
}
