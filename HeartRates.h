#ifndef HEARTRATES_H
#define HEARTRATES_H

#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string firstName, lastName, birthMonth, currentMonth;
    int birthDay, currentDay, birthYear, currentYear, maximumHeartRate, targetHeartRate, lowerEnd, upperEnd;

public:

    int getAge(int year);
    int getMaximumHeartRate(int age);
    void getTargetHeartRate(int lowerEnd, int upperEnd);
};

#endif