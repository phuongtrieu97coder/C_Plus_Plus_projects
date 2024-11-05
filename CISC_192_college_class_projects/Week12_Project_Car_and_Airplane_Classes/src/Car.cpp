#include <iostream>
#include <string>
#include <cstdlib>
#include "Car.h"
using namespace std;

void Car::setName(string n) {
	if (n.length() >= 0) {
		name = n;
	}
	else {
		exit(EXIT_FAILURE);
	}
}
void Car::setMaxSpeed(int speed) {
	if (speed >= 0) {
		max_speed = speed;
	}
	else {
		exit(EXIT_FAILURE);
	}
}
void Car::setNumberOfCylinders(int num) {
	if (num >= 0) {
		number_of_cylinders = num;
	}
	else {
		exit(EXIT_FAILURE);
	}
}

string Car::getName() {
	return name;
}
int Car::getMaxSpeed() {
	return max_speed;
}
int Car::getNumberOfCylinders() {
	return number_of_cylinders;
}
