#include <iostream>
using namespace std;

int main(){
    int month; char hemisphere;
    cout << "Enter a hemisphere (N - S): ";cin >> hemisphere;
    switch (hemisphere) {
        case 'N':
            cout << "Enter a month number (1 - 12): ";cin >> month;
            if (!(month>=1 && month <=12)) { cout << "Please enter a valid month number (1 - 12)." <<endl;}
            break;
        case 'S':
            cout << "Enter a month number (1 - 12): ";cin >> month;
            if (!(month>=1 && month <=12)) { cout << "Please enter a valid month number (1 - 12)." <<endl;}
            break;
        default:
            cout << "Please enter a valid hemisphere (N - S)."<<endl;
            break;
    }


    if ((hemisphere == 'N') && (month == 12 || month == 1 || month == 2)){
        cout << "The season is Winter." << endl;
    }else if ((hemisphere == 'S') && ((month == 12) || (month == 1) || (month == 2))){
        cout << "The season is Summer." << endl;

    }else if ((hemisphere == 'N') && ((month == 3) || (month == 4) || (month == 5))){
        cout << "The season is Spring." << endl;
    }else if ((hemisphere == 'S') && ((month == 3) || (month == 4) || (month == 5))){
        cout << "The season is Fall." << endl;

    }else if ((hemisphere == 'N') && ((month == 6) || (month == 7) || (month == 8))){
        cout << "The season is Summer." << endl;
    }else if ((hemisphere == 'S') && ((month == 6) || (month == 7) || (month == 8))){
        cout << "The season is Winter." << endl;

    }else if ((hemisphere == 'N') && ((month == 9) || (month == 10) || (month == 11))){
        cout << "The season is Fall." << endl;
    }else if ((hemisphere == 'S') && ((month == 9) || (month == 10) || (month == 11))){
        cout << "The season is Spring." << endl;
    }
    return 0;
}
