
#include <iostream>
using namespace std;

int main() {

   int row;

   cout<< "Enter the numbers of rows: ";
   cin>>row;

   for(int i=1; i<=row; i++){
        for(int s=1; s<= i-1; s++){
            cout<< " ";
        }
        for(int j=1; j<=row - i + 1; j++){
            cout<< "* ";
        }
        cout<<endl;
    }
      for(int i=1; i<=(row-1); i++){
        for(int s=1; s<=(row -1) - i; s++){
            cout<< " ";
        }
        for(int j=1; j<=(i+1); j++){
            cout<< "* ";
        }
        cout<<endl;
    }
  return 0;
}
