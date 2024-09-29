#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double r;
    cout << "Enter the radius of the circle (m): ";
    cin >> r;
    cout<<endl;
    cout << "The area of the circle is: " << setprecision(2) << fixed <<(3.14*pow(r, 2.0)) << " square meters"<<endl;
    return 0;

}