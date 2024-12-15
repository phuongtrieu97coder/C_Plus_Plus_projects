//#pragma once
//#pragma once
#ifndef PAR_TIME_STUDENT_H
#define PAR_TIME_STUDENT_H
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include "Student.h"
using namespace std;

class Par_Time_Student : public Student {
protected:
	string job;
	double salary;
public:
	using Student::Student;
	Par_Time_Student() : Student("Human", 25,"C++") {
		job = "Software Engineer Intern";
		salary = 35000;
	};
	Par_Time_Student(string name1, int age1, string courseName1, string job1, double salary1) :
		Student(name1, age1, courseName1) {
		job = job1;
		salary = salary1;
	};
	void setJob(string job1) {
		if (job1.length() > 0) {
			job = job1;
		}
		else {
			exit(EXIT_FAILURE);
		}
	};

	string getJob() const { return job; };

	void setSalary(double salary1) {
		if (salary1 > 0) {
			salary = salary1;
		}
		else {
			exit(EXIT_FAILURE);
		}
	};

	double getSalary() const { return salary; };

	
};
#endif

