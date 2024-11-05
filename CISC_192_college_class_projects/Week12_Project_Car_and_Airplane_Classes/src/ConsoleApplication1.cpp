#include <iostream>
#include <string>
#include <iomanip>
#include "Car.h"
#include "Airplane.h"
using namespace std;

int main() {
	Car car1("Ford",220,4);
	cout << "car1 object data:" << endl;
	cout << "Name: " << car1.getName() << endl;
	cout << "Speed: " << car1.getMaxSpeed() << " miles/hour" << endl;
	cout << "Number of cylinders: " << car1.getNumberOfCylinders() << endl;
	
	cout << endl;

	Airplane airplane1("Boeing 787", 3530, 16);
	cout << "airplane1 object data:" << endl;
	cout << "Name: " << airplane1.getName() << endl;
	cout << "Speed: " << airplane1.getMaxSpeed() << " km/h" << endl;
	cout << "Number of engines: " << airplane1.getNumberOfEngines() << endl;


	cout << endl;


	cout << "Compares the speed of the car and the airplane objects:" << endl;
	cout << "car1 object data:" << endl;
	cout << "Speed: " << car1.getMaxSpeed() << " miles/hour" << endl;
	
	cout << endl;
	
	cout << "airplane1 object data:" << endl;
	cout << "Speed: " << airplane1.getMaxSpeed() << " km/h" << endl;
	
	cout << endl;

	if (car1.getMaxSpeed() < airplane1.getMaxSpeed()) {
		cout << "==>The speed of car1 object data is less than the speed of airplane1 object data!!!" << endl;
	}
	else {
		cout << "==> The speed of car1 object data is greater than the speed of airplane1 object data!!!" << endl;
	}





	cout << endl;

	car1.setName("Chervolet");
	car1.setMaxSpeed(200);
	car1.setNumberOfCylinders(3);

	cout << "car1 object after being updated data:" << endl;
	cout << "Name: " << car1.getName() << endl;
	cout << "Speed: " << car1.getMaxSpeed() << " miles/hour" << endl;
	cout << "Number of cylinders: " << car1.getNumberOfCylinders() << endl;
	
	
	
	cout << endl;

	airplane1.setName("Boeing 777");
	airplane1.setMaxSpeed(3390);
	airplane1.setNumberOfEngines(12);

	cout << "airplane1 object after being updated data:" << endl;
	cout << "Name: " << airplane1.getName() << endl;
	cout << "Speed: " << airplane1.getMaxSpeed() << " km/h"<< endl;
	cout << "Number of engines: " << airplane1.getNumberOfEngines() << endl;

	cout << endl;


	cout << "Compares the speed of the car and the airplane objects after being updated:" << endl;
	cout << "car1 object data:" << endl;
	cout << "Speed: " << car1.getMaxSpeed() << " miles/hour" << endl;

	cout << endl;

	cout << "airplane1 object data:" << endl;
	cout << "Speed: " << airplane1.getMaxSpeed() << " km/h" << endl;

	cout << endl;

	if (car1.getMaxSpeed() < airplane1.getMaxSpeed()) {
		cout << "==>The speed of car1 object data is less than the speed of airplane1 object data!!!" << endl;
	}
	else {
		cout << "==> The speed of car1 object data is greater than the speed of airplane1 object data!!!" << endl;
	}


	return 0;
}