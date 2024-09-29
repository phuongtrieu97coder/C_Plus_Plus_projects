#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main(){
    string name, event, location, theme_or_colorTheme, name_keyGuest_or_speaker;
    double numberOfGuests;

    cout << "Please enter your name:"<<endl;
    getline(cin, name);

    cout << "Please enter the type of event you are planning:"<<endl;
    getline(cin, event);

    cout << "Please enter the location of the event:"<<endl;
    getline(cin, location);


    cout << "Please enter the main theme or color scheme of the event:"<<endl;
    getline(cin, theme_or_colorTheme);

    cout << "Please enter the name of a key guest or speaker."<<endl;
    getline(cin, name_keyGuest_or_speaker);

    cout << "Please enter the number of guests expected:"<<endl;
    cin >> numberOfGuests;

    cout << "Hello "<< name <<"!" <<endl;
    cout << "Your "<< event <<" is all set to happen at " << location << "."<<endl;
    cout << "You can expect around "<< numberOfGuests <<" guests to join the celebration." <<endl;
    cout << "The event will be adorned with a "<< theme_or_colorTheme <<" theme, making it a memorable day." <<endl;
    cout << "Special guest "<< name_keyGuest_or_speaker <<" will be the highlight of the event." <<endl;
    cout << "We are looking forward to helping you make your event successful!" <<endl;

    return 0;
}