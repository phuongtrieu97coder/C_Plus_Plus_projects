#include <iostream>
using namespace std;

int getValue();
bool isEven(int);
void showResult(bool);

int main() {
	showResult(isEven(getValue()));
	return 0;
}

int getValue() {
	int num;
	cout << "Please enter an integer on the keyboard: ";
	cin >> num;
	cout << endl;
	return num;
}

bool isEven(int getVal) {
	if (getVal % 2 == 0) {
		return true;
	}
	else {
		return false;
	}
}

void showResult(bool isEven) {
	if (isEven == true) {
		cout << "The number you entered is even." << endl;
	}
	else {
		cout << "The number you entered is odd." << endl;
	}
}
