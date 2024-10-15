
#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <random>
#include <vector>
#include <algorithm>
#include <memory>
using namespace std;


string convertMonth(int month) {
    vector<string> monthData = {
        "January","February",
        "March","April",
        "May", "June",
        "July", "August",
        "September", "October",
        "November", "December"
    };//right
    return monthData[month - 1];//right
}

string convertTime(string time) {
    int hour = stoi(time.substr(0, 2));//right
    int hourOutput;
    if (hour >= 12) {
        hourOutput = hour - 12;
    }
    else if (hour == 0) {
        hourOutput = 12;
    }
    else {
        hourOutput = hour;
    }//right


    string minute = time.substr(3, 2);//right

    string period;
    if (hour - 12 >= 0)
    {
        period = "PM";
    }
    else if (hour == 0) {
        period = "AM";
    }
    else {
        period = "AM";
    }
    //right

    string output1 = to_string(hourOutput) + ":" + minute + " "
        + period;//right

    return output1;
}

string convertDay(int day) {//right
    string dayTwoDigit = to_string(day);//right
    if (day < 10) {
        dayTwoDigit.insert(0, "0");//right
    }

    string output;

    switch (day) {
   
    case 1: case 21: case 31:
        output = dayTwoDigit.append("st");//right
        break;
    case 2: case 22:
        output = dayTwoDigit.append("nd");//right
        break;
    case 3: case 23:
        output = dayTwoDigit.append("rd");//right
        break;
    default:
        output = dayTwoDigit.append("th");//right
        break;
    }
    return output;
}

string convertDate(string date) {//right
    int year = stoi(date.substr(0, 4));//right
    int month = stoi(date.substr(5, 2));//right
    int day = stoi(date.substr(8, 2));//right

    string output1 = convertDay(day) + " of " + convertMonth(month)
        + ", " + to_string(year);//right
    return output1;
}

string validateDateTimeInput(string dateTimeInput) {
    if (dateTimeInput.length() != 19) {
        return "Invalid datetime format";
    }
    string date_split = dateTimeInput.substr(0, 10);//right
    string year = date_split.substr(0,4),//right
    month = date_split.substr(5, 2),//right
    day = date_split.substr(8, 2);//right

    string time_split = dateTimeInput.substr(dateTimeInput.length() - 8, 8);//right
    string hour = time_split.substr(0, 2),//right
        minute = time_split.substr(3, 2), //right
        second = time_split.substr(6,2);//right

    string output = convertDate(date_split) + " at " + convertTime(time_split);//right
    
    if (dateTimeInput.find('-', 4) && dateTimeInput.find('-', 7)
        && dateTimeInput.find(' ', 10) && dateTimeInput.find(':', 13)
        && dateTimeInput.find(':', 16) && stoi(year) >=0 
        && stoi(month) >=0 && stoi(day) >=0
        && stoi(hour) >=0 && stoi(minute) >=0 && stoi(second) >= 0) 
    {//right
        return output;
        
    }
    else {
		return "Invalid datetime format";
    }

}
int main()
{
    //"YYYY-MM-DD HH:MM:SS"
    //convert into
    //"DDth of MonthName, YYYY at HH:MM AM/PM"
    string dateTimeInput;
	//Comment out the line below to test the function in Pearson Revel
    cout << "Enter date and time with format (YYYY-MM-DD HH:MM:SS): ";
    getline(cin, dateTimeInput);

    cout << validateDateTimeInput(dateTimeInput);

  return 0;
}
//Testing
//2023-01-08 14:05:09 -> Output: 08th of January, 2023 at 2:05 PM
//2024-12-31 00:00:00 -> Output: 31st of December, 2024 at 12:00 AM
//Invalid input -> Output: Invalid datetime format

   

