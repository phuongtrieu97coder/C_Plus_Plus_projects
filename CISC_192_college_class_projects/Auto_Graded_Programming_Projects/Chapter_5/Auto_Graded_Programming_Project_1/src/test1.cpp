#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    const int daysInYear = 360;
    const int monthsInYear = 12;
    const int daysInMonth = 30;
    

    cout << setprecision(3);

    
    //Find average temperature and number of temperature swings for each month

    double temperature = 0.0;
    double prevTemp = 2;
    
    ifstream inputFile("WeatherData.txt");

    if (!inputFile) {
        cout << "Error opening file!" << endl;
        return 1;
    }


    for (int month=1; month<=monthsInYear; month++){
        cout << "Month " << setfill('0') << setw(2) << month << endl;
        cout << "--------" << endl;
        double monthlyTotalTemperature = 0.0;
        int tempSwings = 0;
        
        int counter = 0;
        

        for (int day=0; day < daysInMonth; day++){
            counter++;
            inputFile >> temperature;
            if (abs(temperature - prevTemp) > 5.0){
                tempSwings++;
            }
            prevTemp = temperature;
            monthlyTotalTemperature += temperature;
           
        }
        cout << "Average temperature: " 
                << (monthlyTotalTemperature / daysInMonth)
                << endl;
        cout << "Number of temperature swings: "<<tempSwings << endl <<endl;
        
    }
    inputFile.close();




    //Find yearly average temperature

    ifstream inputFile2("WeatherData.txt");

    if (!inputFile2) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    double temperature2;
    double totalTemperature = 0.0;

    for (int day=0; day<daysInYear; day++){
        inputFile2 >> temperature2;
        totalTemperature += temperature2;
        
    }
    inputFile2.close();


    double yearlyAverageTemperature = totalTemperature / daysInYear;


    
    cout << "Average yearly temperature: " << yearlyAverageTemperature << endl;



    //Find hottest and coldest days of the year with their temperatures
    ifstream inputFile3("WeatherData.txt");
    
    if (!inputFile3) {
        cout << "Error opening file!" << endl;
        return 1;
    }

    double temperature3;
    double hottest_temperature;
    double coldest_temperature;
    int day_of_hottest_temperature = 0;
    int day_of_coldest_temperature = 0;
    int readLine_number = 0;

    // Read the first temperature to initialize hottest and coldest temperatures
    if(inputFile3 >> temperature3){
        hottest_temperature = temperature3;
        coldest_temperature = temperature3;
        day_of_hottest_temperature = 1;
        day_of_coldest_temperature = 1;
        readLine_number = 1;
    }

    //Read the rest of temperatures
    while(inputFile3 >> temperature3){
        readLine_number++;
        if(temperature3 > hottest_temperature){
            hottest_temperature = temperature3;
            day_of_hottest_temperature = readLine_number;
        }
        if(temperature3 < coldest_temperature){
            coldest_temperature = temperature3;
            day_of_coldest_temperature = readLine_number;
        }
    }
    inputFile3.close();

    cout << "Day " << day_of_hottest_temperature << " was the hottest, with a temperature of " << hottest_temperature << " degrees Celsius." << endl;
    cout << "Day " << day_of_coldest_temperature << " was the coldest, with a temperature of " << coldest_temperature << " degrees Celsius." << endl;
   

    return 0;
}
