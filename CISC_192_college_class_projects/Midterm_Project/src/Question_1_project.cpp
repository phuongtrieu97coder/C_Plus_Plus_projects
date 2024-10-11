#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <random>
#include <fstream>
#include <vector>
#include <algorithm>
#include <memory>
using namespace std;

string return_user_input(string);

int main() {
	string userInput;
	cout << "Enter a word: " << endl;
	getline(cin, userInput);
	cout << endl;
	cout << return_user_input(userInput) << endl;

	return 0;
}

string return_user_input(string userInput) {	

	if (tolower(userInput[0]) == 'a' ||
		tolower(userInput[0]) == 'o' ||
		tolower(userInput[0]) == 'i' ||
		tolower(userInput[0]) == 'u' ||
		tolower(userInput[0]) == 'e') {
		return "An " + userInput;
	}
	else {
		return "A " + userInput;
	}
}
