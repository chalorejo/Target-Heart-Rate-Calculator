#ifndef HEARTRATES_H
#define HEARTRATES_H

#include <iostream>
using namespace std;

class HeartRates {
private: 
    string firstName, lastName, birthMonth;
    int birthDay, birthYear, maximumHeartRate, targetHeartRate, lowerEnd, upperEnd, age;

public:
    int getAge(int birthYear, int age) {}
    int getMaximumHeartRate(int age) {}
    void getTargetHeartRate(int lowerEnd, int upperEnd){}
};
#endif