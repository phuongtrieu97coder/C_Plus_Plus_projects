//#pragma once
#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
using namespace std;

class Person {
protected:
	string name;
	int age;
public:
	Person(string name1, int age1) : name("Human"), age(25) {
		name = name1;
		age = age1;
	};
	void setName(string name1) {
		if (name1.length() > 0) {
			name = name1;
		}
		else {
			exit(EXIT_FAILURE);
		}
	};
	void setAge(int age1) {
		if (age1 > 0) {
			age = age1;
		}
		else {
			exit(EXIT_FAILURE);
		}
	};
	string getName() const { return name; };
	int getAge() const { return age; };

	virtual void calculateTax(double salary) const = 0;
};
#endif
