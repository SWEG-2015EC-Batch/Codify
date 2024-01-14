#include <iostream>
#include <string>
using namespace std;

const int NUM_EXAMS = 5;

int main() {
    string exam_names[NUM_EXAMS] = {"test", "assignment", "quiz", "project", "final"};
    int exam_scores[NUM_EXAMS];

    // Read in the exam scores
    for (int i = 0; i < NUM_EXAMS; i++) {
        cout << "Enter " << exam_names[i] << " score: ";
        cin >> exam_scores[i];
    }

    // Calculate the total mark
    int total_mark = 0;
    for (int i = 0; i < NUM_EXAMS; i++) {
        total_mark += exam_scores[i];
    }

    // Determine the score level
    string score_level;
    if (total_mark >= 80) {
        score_level = "Excellent";
    } else if (total_mark >= 60) {
        score_level = "Very Good";
    } else if (total_mark >= 50) {
        score_level = "Fair";
    } else if (total_mark >= 40) {
        score_level = "Poor";
    } else {
        score_level = "Fail";
    }

    // Print the results in tabular format
    cout << "\nExam Scores\n";
    cout << "-----------\n";
    for (int i = 0; i < NUM_EXAMS; i++) {
        cout << exam_names[i] << "\t" << exam_scores[i] << endl;
    }
    cout << "-----------\n";
    cout << "Total\t" << total_mark << endl;
    cout << "Score Level\t" << score_level <<endl;

    return 0;
}
