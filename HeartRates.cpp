#include <iostream>
#include "HeartRates.h"
using namespace std;

class HeartRates {
private: 
    string firstName, lastName, birthMonth;
    int birthDay, birthYear, maximumHeartRate, targetHeartRate, lowerEnd, upperEnd;

public:
    void setFName (string first) { 
        firstName = first;
    }
    void setLName (string last){
        lastName = last;
    }
    void setBMonth (string month){
        birthMonth = month;
    }
    void setBDay (int day){
        birthDay = day;
    }
    void setBYear (int year){
        birthYear = year;
    }
    int getAge (int year) {
        int age;
        age = 2025 - year;

        return age;
    }
    int getMaximumHeartRate(int age) { 
        maximumHeartRate = 220 - age; //According to the internet, the maximum heart rate is 220 - age
        // cout << "Maximum Heart Rate: " << maximumHeartRate << " bpm" << endl;
        
        return maximumHeartRate;
    }
    int getTargetHeartRate(int lowerEnd, int upperEnd){
        lowerEnd = maximumHeartRate * 0.5;
        upperEnd = maximumHeartRate * 0.85; 

        return lowerEnd, upperEnd;
    }
};