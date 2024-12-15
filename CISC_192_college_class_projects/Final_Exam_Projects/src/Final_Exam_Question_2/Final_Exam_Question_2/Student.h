//#pragma once
//#pragma once
#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include "Person.h"
using namespace std;

class Student: public Person {
protected:
	string courseName;
public:
	using Person::Person;
	Student(): Person("Human",25) {
		courseName = "C++";
	};
	Student(string name1, int age1, string courseName1) : Person(name1, age1){
		courseName = courseName1;
	};
	void setCourseName(string courseName1) {
		if (courseName1.length() > 0) {
			courseName = courseName1;
		}
		else {
			exit(EXIT_FAILURE);
		}
	};
	
	string getCourseName() const { return courseName; };

	void calculateTax(double salary) const {
		double tax = 0.0;
		if (salary == 0) {
			tax = 0.0;
			

			cout << fixed << showpoint << setprecision(2);
			
			cout << "Total Tax: $" << tax;

			
		}
		else {
			tax = salary * 0.25;
			
			cout << fixed << showpoint << setprecision(2);

			cout << "Total Tax: $" << tax;

			
		}
	};
};
#endif

