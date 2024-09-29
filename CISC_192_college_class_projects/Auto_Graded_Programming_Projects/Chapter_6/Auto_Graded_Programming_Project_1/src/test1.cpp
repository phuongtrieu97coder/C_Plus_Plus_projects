// write your program below
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

void order(char &num1, char &num2){
    if (num1 < num2){
        cout << num1 << " " << num2 << endl;
    }else{
        cout << num2 << " " << num1 << endl;
    }
}
void order(int &num1, int &num2){
    if (num1 < num2){
        cout << num1 << " " << num2 << endl;
    }else{
        cout << num2 << " " << num1 << endl;
    }
}

void order(double &num1, double &num2){
    if (num1 < num2){
        cout << num1 << " " << num2 << endl;
    }else{
        cout << num2 << " " << num1 << endl;
    }
}

int main(){
    string userInput;
    cout << "Select a data type among char, integer, and double: ";
    cin >> userInput;
    cout << endl;    

    if (userInput == "char" || userInput == "int" || userInput == "double"){
        if (userInput == "char"){
            char num1, num2;
            cout << "Enter the first value: ";
            cin >> num1;cout << endl;

            cout << "Enter the second value: ";
            cin >> num2;cout << endl;
            order(num1, num2);
        }
        else if (userInput == "int"){
            int num1, num2;
            cout << "Enter the first value: ";
            cin >> num1;cout << endl;

            cout << "Enter the second value: ";
            cin >> num2;cout << endl;
            order(num1, num2);
        }
        else if (userInput == "double"){
            double num1, num2;
            cout << "Enter the first value: ";
            cin >> num1;cout << endl;

            cout << "Enter the second value: ";
            cin >> num2;cout << endl;            
            order(num1, num2);
        }
        
    }else{
        cout << "Invalid Option" << endl;
        exit(0);
    }

    return 0;
}