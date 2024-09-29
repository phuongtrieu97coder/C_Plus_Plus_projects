#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <random>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int num_students;
    //cout << "Enter the number of students: "; 
    cin >> num_students; 

    int num_grades;
   // cout << "Enter the number of grades per student: "; 
    cin >> num_grades; 
    //cout << endl;

    //vector<vector<double>> student_grades(num_students, vector<double>(num_grades));
    int grades[num_students][num_grades];
    vector<double> avg;

    for (int student = 0; student < num_students; student++) {
      //  cout << "Enter grades for Student " << (student + 1) << ": " << endl;
        double total = 0.0;

        for (int grade = 0; grade < num_grades; grade++) {
           // cout << "Grade " << (grade + 1) << ": "; 
            cin >> grades[student][grade];
            total += grades[student][grade];
        }
       // cout << endl;
        double average = total / num_grades;
        avg.push_back(average);
    }

    cout << "Average grades per student:" << endl;
    for (int i = 0; i < avg.size(); i++) {
        cout << "Student " << (i + 1) << ": " << avg[i] << endl;
    }
	
    return 0;
}
