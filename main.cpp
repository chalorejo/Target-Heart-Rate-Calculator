#include "HeartRates.h"

int main() {
    string firstName, lastName, birthMonth, currentMonth;
    int birthDay, birthYear, currentDay, currentYear;
    int maxHeartRate, lowerEnd, upperEnd;
    char choice;
    int count = 3;

    while (count > 0) {
        cout << "\n+--------------------------------+" << endl;
        cout << "|  TARGET-HEART-RATE CALCULATOR  |" << endl;
        cout << "+--------------------------------+" << endl;
        cout << "(You can run this program up to " << count << " more times.)" << endl;

        cout << "Enter first name: ";
        cin >> firstName;
        cout << "Enter last name: ";
        cin >> lastName;
        
        do {
            cout << "Enter birth month: ";
            cin >> birthMonth;
        } while (!HeartRates::isValidMonth(birthMonth));
        
        do {
            cout << "Enter birth day (1-31): ";
            cin >> birthDay;
        } while (!HeartRates::isValidDay(birthMonth, birthDay));
        
        cout << "Enter birth year: ";
        cin >> birthYear;
        
        do {
            cout << "Enter current month: ";
            cin >> currentMonth;
        } while (!HeartRates::isValidMonth(currentMonth));
        
        do {
            cout << "Enter current day (1-31): ";
            cin >> currentDay;
        } while (!HeartRates::isValidDay(currentMonth, currentDay));
        
        cout << "Enter current year: ";
        cin >> currentYear;
        
        HeartRates person(firstName, lastName, birthMonth, birthDay, birthYear);
        int age = person.getAge(currentYear, currentMonth, currentDay);
        maxHeartRate = person.getMaximumHeartRate(age);
        person.getTargetHeartRate(maxHeartRate, lowerEnd, upperEnd);

        cout << "\n--- Heart Rate Information ---" << endl;
        cout << "Name: " << person.getFirstName() << " " << person.getLastName() << endl;
        cout << "Date of Birth: " << person.getBirthMonth() << " " << person.getBirthDay() << ", " << person.getBirthYear() << endl;
        cout << "Age: " << age << " years old" << endl;
        cout << "Maximum Heart Rate: " << maxHeartRate << " bpm" << endl;
        cout << "Target Heart Rate Range: " << lowerEnd << " - " << upperEnd << " bpm" << endl;

        cout << "Would you like to calculate for another person? (y/n): ";
        cin >> choice;
        if (choice == 'y' || choice == 'Y') {
            count--;
        } else {
            cout << "Thank you for using the Target Heart Rate Calculator!" << endl;
            break;
        }
    }
    return 0;
}