#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <cstring>
#include <cctype>
#include <cmath>

#include "Person.h"
#include "Student.h"
#include "Par_Time_Student.h"

using namespace std;

int main() {
	
	Student student1("Henry", 16, "Intro to Java Programming");

	cout << "Student's name: " << student1.getName() << endl;
	cout << "Student's age: " << to_string(student1.getAge()) << endl;
	cout << "Student's course name: " << student1.getCourseName() << endl;
	cout << "Student's job: Full-time student" << endl;
	student1.calculateTax(0);

	cout << endl << endl;

	Par_Time_Student student2("Kevin", 22, "Security+","Cybersecurity Engineer Intern", 45999.99);
	cout << "Student's name: " << student2.getName() << endl;
	cout << "Student's age: " << to_string(student2.getAge()) << endl;
	cout << "Student's course name: " << student2.getCourseName() << endl;
	cout << "Student's job: " << student2.getJob() << endl;
	cout << "Student's salary: $" << student2.getSalary() << endl;

	student2.calculateTax(student2.getSalary());

	cout << endl << endl;

	return 0;
}

