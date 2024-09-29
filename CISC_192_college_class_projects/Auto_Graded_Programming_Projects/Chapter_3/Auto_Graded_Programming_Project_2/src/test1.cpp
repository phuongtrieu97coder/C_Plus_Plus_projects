#include <iostream>
using namespace std;

int main(){
    double length, width;
    cout << "Enter the length of the rectangle in meters: ";cin >> length;cout << endl;
    cout << "Enter the width of the rectangle in meters: ";cin >> width;cout << endl;
    cout << "The area of the rectangle is: "<< (width*length) <<" square meters.";cout << endl;
    return 0;
}