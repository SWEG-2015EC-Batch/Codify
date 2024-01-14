
#include <iostream>


int main() {

    int size = 5;
    string names[size];

    for (int i = 0; i < size; i++){
       std:: cout << "Enter name #" << i+1 << ": ";
        getline(cin, names[i]);
    }
    
    for(int i = 0; i < size -1; i++){
        for(int j = 0; j < size - i - 1; j++){
            string temp;
            if(names[j][0] > names[j +1][0]){
                temp = names[j];
                names[j] = names[j+1];
                names[j+1] = temp;
            }
        }
    }

    std::cout << "The names in alphabetical order:-\n";
    for (int i = 0; i < size; i++)
    {
        std::cout << names[i] << '\n';
    }

    return 0;
}
