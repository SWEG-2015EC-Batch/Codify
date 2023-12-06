#include <iostream>
using namespace std;

int main() {
    int number = 10;
  
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 10; ++j) {
            std::cout << number << " ";
            number++;
        }
        cout << '\n';
    }

    return 0;
}
