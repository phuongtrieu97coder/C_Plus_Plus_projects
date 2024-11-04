// write your code below
#include <iostream>
#include <string>
using namespace std;
//Notice that you don't need lines 2-4 in your code on Pearson Revel

class Car {
    private:
        int yearModel;
        string make;
        int speed;
    public:
        Car(int year, string mk){
            yearModel = year;
            make = mk;
            speed = 0;
        }
        Car(){
            yearModel=2022;
            make="";
            speed = 0;
        }
        void setYearModel(int year){
            yearModel = year;
        }
        void setMake(string mk){
            make = mk;
        }
        void setSpeed(int sp){
            speed = sp;
        }
        int getYearModel(){
            return yearModel;
        }
        string getMake(){
            return make;
        }
        int getSpeed(){
            return speed;
        }
        void accelerate(){
            speed+=5;
        }
        void brake(){
            speed-=5;
        }
        
};

