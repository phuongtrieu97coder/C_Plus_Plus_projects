#include <iostream>
using namespace std;

int main(){
    const int SECONDS_PER_MINUTE = 60, MINUTES_PER_HOUR = 60, HOURS_PER_DAY = 24;
    cout << "The number of seconds in "<< DAYS << " days is: "<< DAYS * HOURS_PER_DAY * MINUTES_PER_HOUR * SECONDS_PER_MINUTE <<endl;
    cout << "The number of minutes in "<< DAYS << " days is: "<< DAYS * HOURS_PER_DAY * MINUTES_PER_HOUR <<endl;
    cout << "The number of hours in "<< DAYS << " days is: "<< DAYS * HOURS_PER_DAY <<endl;
    return 0;

}