#include <iostream>
#include <string>
#include <cstdlib>
#include "Airplane.h"
using namespace std;

void Airplane::setName(string n) {
	if (n.length() >= 0) {
		name = n;
	}
	else {
		exit(EXIT_FAILURE);
	}
}
void Airplane::setMaxSpeed(int speed) {
	if (speed >= 0) {
		max_speed = speed;
	}
	else {
		exit(EXIT_FAILURE);
	}
}
void Airplane::setNumberOfEngines(int num) {
	if (num >= 0) {
		number_of_engines = num;
	}
	else {
		exit(EXIT_FAILURE);
	}
}

string Airplane::getName() {
	return name;
}
int Airplane::getMaxSpeed() {
	return max_speed;
}
int Airplane::getNumberOfEngines() {
	return number_of_engines;
}
