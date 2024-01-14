#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> nums;
    int num;

    cout << "Enter a list of numbers (0 to stop): ";

    // Read numbers until 0 is entered
    while (true) {
        cin >> num;
        if (num == 0) {
            break;
        }
        nums.push_back(num);
    }

    cout << "Even numbers in reverse order: ";
    for (int i = nums.size() - 1; i >= 0; i--) {
        if (nums[i] % 2 == 0) {
            << nums[i] << " ";
        }
    }
    cout <<endl;

    return 0;
}
