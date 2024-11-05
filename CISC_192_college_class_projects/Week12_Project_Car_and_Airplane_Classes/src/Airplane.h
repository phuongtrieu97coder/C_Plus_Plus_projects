#pragma once
#ifndef	AIRPLANE_H
#define AIRPLANE_H
#include <iostream>
#include <string>
using namespace std;

class Airplane {
private:
	string name;
	int max_speed;
	int number_of_engines;
public:
	Airplane(string nm, int ms, int noe) {
		name = nm;
		max_speed = ms;
		number_of_engines = noe;
	};
	void setName(string);
	void setMaxSpeed(int);
	void setNumberOfEngines(int);

	string getName();
	int getMaxSpeed();
	int getNumberOfEngines();
};
#endif
