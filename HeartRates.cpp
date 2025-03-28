#include <iostream>
#include "HeartRates.h"
using namespace std;

class Person {
private: 
    string firstName, lastName, birthMonth, currentMonth;  
    int birthDay, currentDay, birthYear, currentYear, maximumHeartRate, targetHeartRate, lowerEnd, upperEnd;

public:
    Person (string first, string last, string month, int day, int year, string cMonth, int cDay, int cYear) { //For person, this is also a constrctor
        firstName = first;
        lastName = last;
        birthMonth = month;
        birthDay = day;
        birthYear = year;  
        currentMonth = cMonth; 
        currentDay = cDay;
        currentYear = cYear;
    }

    Person (int maxHeartR, int targetHeartR, int lowEnd, int upEnd) { //For heart rate, this is also a constructor
        maximumHeartRate = maxHeartR;
        targetHeartRate = targetHeartR;
        lowerEnd = lowEnd;
        upperEnd = upEnd;
    }
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

    void setCMonth (string month){
        currentMonth = month;
    }
    void setCDay (int day){
        currentDay = day;
    }
    void setCYear (int year){
        currentYear = year;
    }
    void setMaxHeartRate (int maxHeartR) {
        maximumHeartRate = maxHeartR;
    }
    void setTargetHeartRate (int targetHeartR) {
        targetHeartRate = targetHeartR;
    }
    void setLowerEnd (int lowEnd) {
        lowerEnd = lowEnd;
    }
    void setUpperEnd (int upEnd) {
        upperEnd = upEnd;
    }
    int getAge (int year) {
        int age;
        int yearNow;
        age = yearNow - year;

        return age;
    }
    int getMaximumHeartRate(int age, int maxHeartR) { 
        maxHeartR = 220 - age; //According to the internet, the maximum heart rate is 220 - age
        // cout << "Maximum Heart Rate: " << maximumHeartRate << " bpm" << endl;
        
        return maxHeartR;
    }
    int getTargetHeartRate(int lowEnd, int upEnd, int maxHeartR) { //Target heart rate is 50% to 85% of maximum heart rate
        lowEnd = maxHeartR * 0.5;
        upEnd = maxHeartR * 0.85; 

        return lowEnd, upEnd;
    }
};