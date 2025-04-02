#ifndef HEARTRATES_H
#define HEARTRATES_H

#include <iostream>
#include <string>
using namespace std;

class HeartRates {
private:
    string firstName, lastName, birthMonth;
    int birthDay, birthYear;
    static const string monthsInYear[12];

public:
    // Constructor
    HeartRates(string fName, string lName, string bMonth, int bDay, int bYear);

    // Getter functions
    string getFirstName() const;
    string getLastName() const;
    string getBirthMonth() const;
    int getBirthDay() const;
    int getBirthYear() const;

    // Validation functions
    static bool isValidMonth(const string &month);
    static bool isValidDay(const string &month, int day);
    static int getMonthIndex(const string &month);

    // Calculation functions
    int getAge(int currentYear, string currentMonth, int currentDay) const;
    int getMaximumHeartRate(int age) const;
    void getTargetHeartRate(int maxHeartRate, int &lower, int &upper) const;
};

#endif