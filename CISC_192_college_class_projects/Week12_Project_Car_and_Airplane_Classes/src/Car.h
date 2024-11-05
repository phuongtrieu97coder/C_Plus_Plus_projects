#pragma once
#ifndef	CAR_H
#define CAR_H
#include <iostream>
#include <string>
using namespace std;

class Car {
	private:
		string name;
		int max_speed;
		int number_of_cylinders;
	public:
		Car(string nm, int ms, int noc) {
			name = nm;
			max_speed = ms;
			number_of_cylinders = noc;
		};
		void setName(string);
		void setMaxSpeed(int);
		void setNumberOfCylinders(int);

		string getName();
		int getMaxSpeed();
		int getNumberOfCylinders();
};
#endif
