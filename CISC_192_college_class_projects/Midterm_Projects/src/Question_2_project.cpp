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


int main() {
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			int multiply = i * j;
			if (multiply < 10) {
   				cout << "|" << multiply << "      ";
			}
			
			else if (multiply >= 10 && multiply < 100) {
				if (j == 10 && multiply >= 10 && multiply < 100) {
					cout << "|" << multiply << "    |";
				}
				else {
					cout << "|" << multiply << "     ";
				}
			}
			
			

			else if (multiply >= 100) {
				if (j == 10 && multiply >= 100) {
					cout << "|" << multiply << "   |";
				}
				else {
				    cout << "|" << multiply << "    ";
				}
			}
			
			
		}
		cout << endl;
		for (int j = 1; j <= 10; j++) {
			cout << "________";
		}
		cout << endl << endl;
	}
	return 0;
}
