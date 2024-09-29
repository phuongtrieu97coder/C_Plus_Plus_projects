// Insert your code here.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	cout << "Fitness Activity Tracker" <<endl<<endl;
	cout << "1. Jogging" <<endl;
	cout << "2. Cycling" << endl;
	cout << "3. Swimming" << endl;
	cout << "4. Quit" <<endl;

	cout << "\nEnter your choice (1-4): ";
	int choice;
	cin >> choice;

	switch (choice) {
		int duration;
		case 1:
			cout << "\nEnter the time spent jogging in minutes: ";
			cin >> duration;
			cout << "\nCalories burned: "<< (0.75 * duration) <<endl;
			break;
		case 2:
			cout << "\nEnter the time spent cycling in minutes: ";
			cin >> duration;
			cout << "\nCalories burned: "<< (0.5 * duration) <<endl;
			break;
		case 3:
			cout << "\nEnter the time spent swimming in minutes: ";
			cin >> duration;
			cout << "\nCalories burned: "<< (0.8 * duration) <<endl;
			break;
		case 4:
			cout << "\nProgram ending.\n";
			break;
		default:
			cout << "\nValid choices are 1 through 4. Try again.\n";
			break;
	}

	return 0;
}