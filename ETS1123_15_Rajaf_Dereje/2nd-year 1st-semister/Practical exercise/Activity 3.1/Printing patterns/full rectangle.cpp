 //for a full square
#include <iostream>

using namespace std;

int main()
{
    int row,colom;
    char character;
 
    cout<< "Enter the character you want to build you squares with: ";
    cin>> character;
    cout << "Enter the number of rows: ";
    cin>>row;
    cout<< "Enter the number of colom: ";
    cin>>colom;

    for (int r=1; r<=row;r++) {
        for (int c=1; c<=colom;c++) {
            cout<< character<< " ";
        }
        cout<<endl;
    }
    */


    return 0;
}
