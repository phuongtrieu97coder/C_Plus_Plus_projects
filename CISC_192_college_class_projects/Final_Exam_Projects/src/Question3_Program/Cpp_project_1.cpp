#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <cctype>
#include <cstdlib>
using namespace std;

bool getTemperature(double temperature);

int main() {
	cout << "Test Case #1 with temperature 40: " << endl;
	if (getTemperature(40)==true) {
		cout << "Temp normal";
	}

	cout << endl << endl;
	
	cout << "Test Case #2 with temperature 60: " << endl;
	if (getTemperature(60)==true) {
		cout << "Temp normal";
	}

	cout << endl;
	return 0;
}
bool getTemperature(double temperature) {
	try {
		string msg = "Temp too high!";
		if(temperature > 50){
			throw msg;
		}
	}
	catch (string msg) {
		cout << msg << endl;
		return false;
	}
	return true;
};