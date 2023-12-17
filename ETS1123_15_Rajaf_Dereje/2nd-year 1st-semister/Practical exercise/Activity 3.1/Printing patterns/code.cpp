#include <iostream>

using namespace std;

int main()
{
    int row,colom,num;
    char character;

    //to print numbers from 10-49
    /*
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
    */

    //for a full square
    /*
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

    //for a hallo square
    /*
    cout<< "Enter the character you want to build you squares with: ";
    cin>> character;
    cout << "Enter the number of rows: ";
    cin>>row;
    cout<< "Enter the number of colom: ";
    cin>>colom;

    for (int r=1;r<=row;r++) {
        for (int c=1;c<=colom;c++) {
            if (r==1||r==row||c==1||c==colom) {
                cout<< character<< " ";
            }
            else {
                cout<< "  ";
            }
        }
        cout<<endl;
    }
    */

    //for half a pyramid
    /*
    cout<< "Enter the character you want to build your half pyramid with: ";
    cin>> character;
    cout << "Enter the number of rows: ";
    cin>>row;
    cout<< "Enter the number of colom: ";
    cin>>colom;

    for (int r=1;r<=row;r++) {
        for (int c=1;c<=colom;c++) {
            if (c<=r) {
                cout<< character<< " ";
            }
            else {
                cout<< "  ";
            }
        }
        cout<<endl;
    }
    */

    //for inverted half pyramid
    /*
    cout<< "Enter the character you want to build your half pyramid with: ";
    cin>> character;
    cout << "Enter the number of rows: ";
    cin>>row;
    cout<< "Enter the number of colom: ";
    cin>>colom;

     for (int r=1;r<=row;r++) {
        for (int c=1;c<=colom;c++) {
            if (r==1||c==1||c<=colom-r+1) {
                cout<< character<< " ";
            }
            else {
                cout<< "  ";
            }
        }
        cout<<endl;
    }
    */

    //for hallo inverted half pyramid
    /*
    cout<< "Enter the character you want to build your half pyramid with: ";
    cin>> character;
    cout << "Enter the number of rows: ";
    cin>>row;
    cout<< "Enter the number of colom: ";
    cin>>colom;

     for (int r=1;r<=row;r++) {
        for (int c=1;c<=colom;c++) {
            if (r==1||c==1||c==colom-r+1) {
                cout<< character<< " ";
            }
            else {
                cout<< "  ";
            }
        }
        cout<<endl;
    }
    */

    //for a full inverted pyramid
    cout<< "Enter the character you want to build your full pyramid with: ";
    cin>> character;
    cout << "Enter the number of rows: ";
    cin>>row;
    cout<< "Enter the number of colom: ";
    cin>>colom;

     for (int r=1;r<=row;r++) {
        for (int s = 1 ; s<=row-s; s++) {
            cout<< " ";
        }
        for (int c=1;c<=colom;c++) {
            if (r<=c) {
                cout<< character<< " ";
            }
            else {
                cout<< " ";
            }
        }
        cout<<endl;
    }



    return 0;
}

