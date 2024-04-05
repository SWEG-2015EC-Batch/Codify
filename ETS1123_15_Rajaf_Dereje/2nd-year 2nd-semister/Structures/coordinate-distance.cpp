// This program find the distance between two point in an xy coordinate 
#include <iostream>
#include <cmath>
using namespace std;

struct point{
    float x, y;
};

inline float distance(point, point);

int main(){

    point coordinate_1, coordinate_2;

    cout<<"\nEnter coordinate 1\n";
    cout<<"X1: ";
    cin>>coordinate_1.x;
    cout<<"Y2: ";
    cin>>coordinate_1.y;

    cout<<"\nEnter coordinate 2\n";
    cout<<"X2: ";
    cin>>coordinate_2.x;
    cout<<"Y2: ";
    cin>>coordinate_2.y;

    cout<<"The distance is: "<<distance(coordinate_1 , coordinate_2);

    return 0;
}

// Function to find distance between two XY coordinate points.
float distance(point firstCoordinate , point secondeCoordinate){

    //formula for the distance between two points.
    return sqrt(pow((firstCoordinate.x - secondeCoordinate.x),2) + pow((firstCoordinate.y - secondeCoordinate.y),2));
    
}
