// HeartRates.cpp (Implementation File)
#include "HeartRates.h"

const string HeartRates::monthsInYear[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

HeartRates::HeartRates(string fName, string lName, string bMonth, int bDay, int bYear)
    : firstName(fName), lastName(lName), birthMonth(bMonth), birthDay(bDay), birthYear(bYear) {}

string HeartRates::getFirstName() const { return firstName; }
string HeartRates::getLastName() const { return lastName; }
string HeartRates::getBirthMonth() const { return birthMonth; }
int HeartRates::getBirthDay() const { return birthDay; }
int HeartRates::getBirthYear() const { return birthYear; }

bool HeartRates::isValidMonth(const string &month) {
    for (const string &m : monthsInYear) {
        if (month == m) return true;
    }
    cout << "Invalid month!" << endl;
    return false;
}

bool HeartRates::isValidDay(const string &month, int day) {
    if (day < 1 || day > 31) {
        cout << "Invalid day!" << endl;
        return false;
    }
    if (day == 31 && (month == "April" || month == "June" || month == "September" || month == "November")) {
        cout << "Invalid day for " << month << "!" << endl;
        return false;
    }
    if (day > 29 && month == "February") {
        cout << "Invalid day for " << month << "!" << endl;
        return false;
    }
    return true; // Return true only if all checks pass
}

int HeartRates::getMonthIndex(const string &month) {
    for (int i = 0; i < 12; i++) {
        if (monthsInYear[i] == month) return i;
    }
    return -1;
}

int HeartRates::getAge(int currentYear, string currentMonth, int currentDay) const {
    int age = currentYear - birthYear;
    int birthMonthIndex = getMonthIndex(birthMonth);
    int currentMonthIndex = getMonthIndex(currentMonth);
    
    if (birthMonthIndex > currentMonthIndex || (birthMonthIndex == currentMonthIndex && birthDay > currentDay)) {
        age--;
    }
    return age;
}

int HeartRates::getMaximumHeartRate(int age) const {
    return 220 - age;
}

void HeartRates::getTargetHeartRate(int maxHeartRate, int &lower, int &upper) const {
    lower = maxHeartRate * 0.5;
    upper = maxHeartRate * 0.85;
}
