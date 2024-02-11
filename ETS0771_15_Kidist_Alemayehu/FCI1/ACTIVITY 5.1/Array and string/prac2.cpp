#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

const int N = 3; 

int main() {
    double personInfo[N][3]; 
    char fullName[N][50];  
    std::cout << "Enter the information for " << N << " persons:" << std::endl;
    for (int i = 0; i < N; ++i) {
        std::cout << "Person " << i + 1 << ":\n";
        std::cout << "Enter height (in meters): ";
        std::cin >> personInfo[i][0];

        std::cout << "Enter weight (in kilograms): ";
        std::cin >> personInfo[i][1];

        personInfo[i][2] = 0.0; 
    }

    calculateBMI(&personInfo[0][0], &personInfo[0][1], &personInfo[0][2]);

    std::cin.ignore(); 
    for (int i = 0; i < N; ++i) {
        std::cout << "Enter full name for Person " << i + 1 << ": ";
        std::cin.getline(fullName[i], sizeof(fullName[i]));
    }

    std::cout << "\n\n";
    std::cout << std::setw(20) << "Full Name" << std::setw(15) << "Height (m)" << std::setw(15) << "Weight (kg)" << std::setw(15) << "BMI" << std::endl;
    for (int i = 0; i < N; ++i) {
        std::cout << std::setw(20) << fullName[i] << std::setw(15) << personInfo[i][0] << std::setw(15) << personInfo[i][1] << std::setw(15) << personInfo[i][2] << std::endl;
    }

    return 0;
}
