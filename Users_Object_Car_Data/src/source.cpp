#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <iomanip>
#include <cmath>
#include <random>
#include <fstream>
#include <cstdlib>
#include <memory>
#include <vector>
#include <algorithm>
#include <filesystem>
using namespace std;

class Car {
	private:
		int id;
	public:
		string model, brand, color;
		void setId(int);
		void setModel(string);
		void setBrand(string);
		void setColor(string);
		
		int getId();
		string getModel();
		string getBrand();
		string getColor();
};
void Car::setId(int i_d){
	id = i_d;
}
void Car::setModel(string mdl){
	model = mdl;
}
void Car::setBrand(string brnd){
	brand = brnd;
}
void Car::setColor(string clr){
	color = clr;
}

int Car::getId(){
	return id;
}
string Car::getModel(){
	return model;
}
string Car::getBrand(){
	return brand;
}
string Car::getColor() {
	return color;
}
void getUserCarData(int&, string&,string&,string&, int);
void createCarObjectData(Car&, int, string, string, string, int, vector<Car>&);
void outputCarData(vector<Car>, string);
void checkUserOutputData(char&,vector<Car>, string&);

int main() {
	char repeat = 'y';
	int carId;
	string carModel, carBrand, carColor;
	int carNum = 1;
	vector<Car> carVectorData;

	char user_want_to_see_data;
	string showCarNumData;

	cout << "Welcome to car data entry program!!!" << endl;
	cout << endl;

	do {
		getUserCarData(carId, carModel, carBrand, carColor, carNum);

		cout << endl;
		
		Car carObj;
		createCarObjectData(carObj, carId, carModel, 
		carBrand, carColor, carNum, carVectorData);


		carNum++;

		cout << endl;
		
		checkUserOutputData(user_want_to_see_data, carVectorData, showCarNumData);

		cout << endl;

		cout << "Do you want to enter new car data? (y/n): ";
		cin.get(repeat);
		cin.ignore();

		cout << endl;

	} while (tolower(repeat) == 'y');
	cout << "End program!!!" << endl;
	
	
	return 0;
}
void getUserCarData(int &carId,
string &carModel, string &carBrand, string &carColor,
int carNum) {

	cout << "Enter your #" << carNum << " car data:" << endl;

	cout << endl;

	cout << "Enter your car id: ";
	cin >> carId;
	cin.ignore();
	cout << endl;

	cout << "Enter your car model: ";
	getline(cin, carModel);
	cout << endl;

	cout << "Enter your car brand: ";
	getline(cin, carBrand);
	cout << endl;

	cout << "Enter your car color: ";
	getline(cin, carColor);
	cout << endl;
}

void createCarObjectData(Car &car1, int carId,
	string carModel, string carBrand, string carColor,
	int carNum, vector<Car> &carVectorData) {
	car1.setId(carId);
	car1.setModel(carModel);
	car1.setBrand(carBrand);
	car1.setColor(carColor);

	carVectorData.push_back(car1);

}
void outputCarData(vector<Car> carVectorData, string showCarNumData) {
	
	if(tolower(showCarNumData[0]) == 'a') {
		for (int i = 0; i < carVectorData.size(); i++) {
			cout << "Your #" << (i+1) << " car data:" << endl;
			cout << "Car ID: " << carVectorData[i].getId() << endl;
			cout << "Car Model: " << carVectorData[i].getModel() << endl;
			cout << "Car Brand: " << carVectorData[i].getBrand() << endl;
			cout << "Car Color: " << carVectorData[i].getColor() << endl;

			cout << endl;
		}
	}
	else {
		int carNum = stoi(showCarNumData);
		cout << "Your #" << carNum << " car data:" << endl;
		cout << "Car ID: " << carVectorData[carNum - 1].getId() << endl;
		cout << "Car Model: " << carVectorData[carNum - 1].getModel() << endl;
		cout << "Car Brand: " << carVectorData[carNum - 1].getBrand() << endl;
		cout << "Car Color: " << carVectorData[carNum - 1].getColor() << endl;

		cout << endl;
	}

	
}


void checkUserOutputData(char& user_want_to_see_data,
	vector<Car> carVectorData, string& showCarNumData) {
	cout << "Do you want to see your car data? (y/n): ";
	cin.get(user_want_to_see_data);
	cin.ignore();
	cout << endl;

	if (tolower(user_want_to_see_data) == 'y') {
		cout << "You have a total of " << carVectorData.size()
			<< " car data in our database!" << endl;
		cout << "Which car data do you want to see?" << endl;
		if (carVectorData.size() == 1) {
			cout << "Enter car number 1 or letter a or A to see all car data: ";
			cin >> showCarNumData;
			cin.ignore();
			cout << endl;
			outputCarData(carVectorData, showCarNumData);
		}
		else {
			cout << "Enter car number from 1 to " << carVectorData.size()
				<< " or letter a or A to see all car data: ";
			cin >> showCarNumData;
			cin.ignore();
			cout << endl;
			outputCarData(carVectorData, showCarNumData);
		}
		cout << endl;
	}
}