
#include <iostream>
using namespace std;

int main() {
    const int NUM_PEOPLE = 4;
    bool friends[NUM_PEOPLE][NUM_PEOPLE] = {
        {false, true, true, false},
        {true, false, true, true},
        {true, true, false, true},
        {false, true, true, false}
    };

    // Count the number of friendship pairs
    int num_pairs = 0;
    for (int i = 0; i < NUM_PEOPLE; i++) {
        for (int j = i+1; j < NUM_PEOPLE; j++) {
            if (friends[i][j]) {
                num_pairs++;
            }
        }
    }

    // Print the friendship pairs and the number of pairs
    cout << "Friendship Pairs\n";
    cout << "----------------\n";
    for (int i = 0; i < NUM_PEOPLE; i++) {
        for (int j = i+1; j < NUM_PEOPLE; j++) {
            if (friends[i][j]) {
                cout << "Person " << i << " and Person " << j << endl;
            }
        }
    }
    cout << "----------------\n";
    cout << "Number of Pairs: " << num_pairs << endl;

    return 0;
}
