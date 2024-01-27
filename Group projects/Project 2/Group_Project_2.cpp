// An Airline Reservation System
// Group Name Codify!
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){
    const int capacity = 100; 
    const int firstClassCapacity = 30; 
    const int economyCapacity = capacity - firstClassCapacity; 

    string name[capacity];
    char sexes[capacity];
    bool seats[capacity] = {false};
    int age[capacity];
    string passports[capacity];
    int economyPassengers = 0, firstClassPassengers = 0; // to use as indexes for classes
    bool transferred = false;
    char choice = 0;

    cout << "Welcome to the airline reservation system!\n";

    for (int i = 0; i < capacity; i++) {
        bool foundSeats = false;

        cout << "\n|Welcome!!          |"<<
                "\n|Please type        |"<<
                "\n|1 for \"First Class\"|"<<
                "\n|2 for \"Economy\"    |\n"<<
                "\n|Your choice: ";
        cin >> choice;

        while (true) {

            if (choice == '1' || transferred) {
                int seatIndex = 0;
                // for loop to chech if seats are avialable in first class
                for (; seatIndex < firstClassCapacity; seatIndex++) {
                    if (!seats[seatIndex]) {
                        foundSeats = true;
                        seats[seatIndex] = true;
                        break;
                    }
                }

                if (foundSeats) {
                    cout << "\nWelcome aboard!\n";
                    cout << "Please input personal details\n";
                    cout << "Name: ";
                    cin.ignore();
                    getline(cin, name[i]);

                    do {
                        cout << "Sexes (M/F): ";
                        cin >> sexes[firstClassPassengers];
                        sexes[firstClassPassengers] = toupper(sexes[firstClassPassengers]);
                        if (sexes[firstClassPassengers] != 'F' && sexes[firstClassPassengers] != 'M') {
                            cout << "Invalid Input! Please Enter 'M' for male or 'F' for female!\n";
                        }
                    } while (sexes[firstClassPassengers] != 'F' && sexes[firstClassPassengers] != 'M');

                    do {
                        cout << "Age: ";
                        cin >> age[firstClassPassengers];
                        if (age[firstClassPassengers] <= 0) {
                            cout << "Age can't be Negative or Zero!\n";
                        }
                    } while (age[firstClassPassengers] <= 0);

                    bool uniquePassport; 
                    do {
                        uniquePassport = true;
                        cout << "Passport Number (3 digits): ";
                        cin >> passports[firstClassPassengers];

                        for (int k = 0; k < capacity; ++k) {
                            if (k == firstClassPassengers) continue;
                            if (passports[firstClassPassengers] == passports[k]) {
                                cout << "Passport number must be unique. Please enter a different one.\n";
                                uniquePassport = false;
                                break;
                            }
                            for (char p : passports[firstClassPassengers]) {
                                if (isalpha(p)) {
                                    cout << "Passport number can't contain letters!";
                                }
                            }
                        }
                    } while (cin.fail() || passports[firstClassPassengers].length() != 3 || !uniquePassport);

                    cout << "\nBoarding Pass\n";
                    cout << "Seat: " << seatIndex + 1 << " (First Class)\n";

                    firstClassPassengers++;

                    break;

                } else { // No seats found
                    char altChoise;
                    cout << "\nSorry!! All First class seats have been occupied!\n";
                    cout << "Would you like to be transferred to \"Economy\"?\n";
                    cout << "Please input Y - for Yes or N - for No\n";

                    while (true) {
                        cout << "Enter your choice: ";
                        cin >> altChoise;
                        altChoise = toupper(altChoise);

                        if (altChoise == 'Y') {
                            cout << "You are being transferred to Economy.\n";
                            transferred = true;
                            break;
                        } else if (altChoise == 'N') {
                            cout << "Next flight leaves in 3 Hours\n";
                            i--;
                            break;
                        } else {
                            cout << "Invalid Input!\n";
                        }
                    }

                    if (!transferred) { // to go to Economy and not break out of the loop
                        break;
                    }
                }
            }

            if (choice == '2' || transferred) {
                int seatIndex = 0;
                // for loop to chech if seats are avialable in Economy 
                for (; seatIndex < economyCapacity; seatIndex++) {
                    if (!seats[seatIndex + firstClassCapacity]) {
                        foundSeats = true;
                        seats[seatIndex + firstClassCapacity] = true;
                        break;
                    }
                }

                if (foundSeats) {
                    int economyIndex = firstClassCapacity + economyPassengers; // to simplify code
                    cout << "\nWelcome aboard!\n";
                    cout << "Please input personal details\n";
                    cout << "Name: ";
                    cin.ignore();
                    getline(cin, name[i]);

                    do {
                        cout << "Sexes (M/F): ";
                        cin >> sexes[economyIndex];
                        sexes[economyIndex] = toupper(sexes[economyIndex]);

                        if (sexes[economyIndex] != 'F' && sexes[economyIndex] != 'M') {
                            cout << "Invalid Input! Please Enter 'M' for male or 'F' for female!\n";
                        }
                    } while (sexes[economyIndex] != 'F' && sexes[economyIndex] != 'M');


                    do {
                        cout << "Age: ";
                        cin >> age[economyIndex];
                        if (age[economyIndex] <= 0) {
                            cout << "Age can't be Negative or Zero!\n";
                        }
                    } while (age[economyIndex] <= 0);

                    bool uniquePassport;
                    do {
                        uniquePassport = true;
                        cout << "Passport Number (3 digits): ";
                        cin >> passports[economyIndex];

                        for (int k = 0; k < capacity; ++k) {
                            if (k == economyIndex) continue;
                            if (passports[economyIndex] == passports[k]) {
                                cout << "Passport number must be unique. Please enter a different one.\n";
                                uniquePassport = false;
                                break;
                            }
                            for (char p : passports[economyIndex]) {
                                if (isalpha(p)) {
                                    cout << "Passport number can't contain letters!";
                                }
                            }
                        }

                    } while (cin.fail() || passports[economyIndex].length() != 3 || !uniquePassport);

                    cout << "\nBoarding Pass\n";
                    cout << "Seat: " << seatIndex + economyCapacity + 1 << " (Economy)\n";

                    economyPassengers++;
                    break;

                } else { // seat not found
                    char altChoise;
                    cout << "\nSorry!! All economy seats have been occupied!\n";
                    cout << "Would you like to be transferred to \"First class\"?\n";
                    cout << "Please input y - for Yes or n - for No\n";

                    while (true) {
                        cout << "Enter your choice: ";
                        cin >> altChoise;
                        altChoise = toupper(altChoise);
                        if (altChoise == 'Y') {
                            cout << "You are being transferred to First class.\n";
                            transferred = true;
                            break;
                        } else if (altChoise == 'N') {
                            cout << "Next flight leaves in 3 Hours\n";
                            i--;
                            break;
                        } else {
                            cout << "Invalid Input!\n";
                        }
                    }
                    if (!transferred) { // to go to fist class and not break out of the loop
                        break;
                    }
                }
            } else {
                cout << "Please Input only 1 or 2!\n";
                i--;
                break;
            }
        }

        transferred = false;

        // Additional (Optional) Code
        cout << "\nDo you want to:\n";
        cout << "1. Display the current seat occupancy status\n";
        cout << "2. Search for patrons based on their name\n";
        cout << "3. Continue to the next reservation\n";
        cout << "Enter your choice (1/2/3): ";

        int staffChoice;
        cin >> staffChoice;

        if (staffChoice == 1) {
            cout << "\nCurrent Seat Occupancy Status:\n";
            for (int j = 0; j < capacity; j++) {
                cout << "Seat " << j + 1 << ": " << (seats[j] ? "Occupied" : "Available") << '\n';
            }
        } 
        else if (staffChoice == 2) {
            cout << "\nEnter name to search for: ";
            string searchName;
            cin.ignore();
            getline(cin, searchName);
            bool patronFound = false;

            for (int j = 0; j < capacity; j++) {
                if (name[j] == searchName) {
                    cout << "\nPatron Found!\n";
                    cout << "Name: " << name[j] << '\n';
                    cout << "Seat: " << j + 1 << (j < firstClassCapacity ? " (First Class)" : " (Economy)") << '\n';
                    patronFound = true;
                    break;
                }
            }

            if (!patronFound) {
                cout << "\nPatron not found.\n";
            }
        } 
        else if (staffChoice == 3) {
            continue;
        } else {
            cout << "Invalid choice. Continuing to the next reservation.\n";
        }
    }

    return 0;
}
