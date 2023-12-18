#include <iostream>

using namespace std;

int main()
{
    int row,colom,num;
    char character;

    //to print numbers from 10-49 when its 4x5
    
    cout<< "Enter the number you want to start with: ";
    cin>> num;
    cout << "Enter the number of rows: ";
    cin>>row;
    cout<< "Enter the number of colom: ";
    cin>>colom;

    for (int r=1;r<=row;r++) {
        for (int c=1;c<=colom;c++) {
            cout<< num<< " ";
            num ++;
        }
        cout<<endl;
    }

 

 

   

    return 0;
}

