#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const char jnt = '+', hln = '-', vln = '|'; 
    const int no = 10;
    double ppl[no][3] = {};
    int n;

    cout << "How many people? [1-10]: ";
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        cout << "\nPerson " << i + 1 << "\nWeight: ";
        cin >> **(ppl + i);
        cout << "Height: ";
        cin >> *(*(ppl + i) + 1);
        *(*(ppl + i) + 2) = **(ppl + i) / pow(*(*(ppl + i) + 1), 2);
    }

    cout << "\n\n";
    // make table
    int rows = n, colmuns = 4, width = 10;
    cout << left;
    // output first line
    cout << jnt;
    for (int k = 0; k < colmuns; ++k)
    {
        for (int j = 0; j < width; ++j)
            cout << hln;
        cout << jnt;
    }
    cout << endl;
    // column markers
    cout << vln << setw(width) << "No" << vln
         << setw(width) << "Weight" << vln
         << setw(width) << "Height" << vln
         << setw(width) << "BMI" << vln << endl; 
    cout << jnt;
    for (int k = 0; k < colmuns; ++k)
    {
        for (int j = 0; j < width; ++j)
            cout << hln;
        cout << jnt;
    }
    cout << endl;
    for (int i = 0; i < rows; ++i)
    {
        // row marker
        cout << vln << setw(width) << i + 1 << vln; // end of row marker
        // actual data elements
        cout << setw(width) << **(ppl + i) << vln
             << setw(width) << *(*(ppl + i) + 1) << vln
             << setw(width) << *(*(ppl + i) + 2) << vln << endl; // end of data elements
        // line afterwards
        cout << jnt;
        for (int k = 0; k < colmuns; ++k)
        {
            for (int j = 0; j < width; ++j)
                cout << hln;
            cout << jnt;
        }
        cout << endl;
    }

    return 0;
}
