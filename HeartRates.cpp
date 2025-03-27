#include <iostream>
#include "HeartRates.h"
using namespace std;

class HeartRates {
private: 
    string firstName, lastName, birthMonth;
    int birthDay, birthYear, maximumHeartRate, targetHeartRate, lowerEnd, upperEnd, age;

public:
    int getAge(int birthYear, int age) {
        age = 2025 - birthYear;

        return age;
    }
    int getMaximumHeartRate(int age) { //According to the internet, the maximum heart rate is 220 - age
        maximumHeartRate = 220 - age;
        cout << "Maximum Heart Rate: " << maximumHeartRate << " bpm" << endl;
        
        return maximumHeartRate;
    }
    int getTargetHeartRate(int lowerEnd, int upperEnd){
        lowerEnd = maximumHeartRate * 0.5;
        upperEnd = maximumHeartRate * 0.85; 

        return lowerEnd, upperEnd;
    }
};