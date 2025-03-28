#include <iostream>
#include <string>
using namespace std;

int main(){
    string firstName, lastName, birthMonth, currentMonth;
    int birthDay, birthYear, currentDay, currentYear, maximumHeartRate, targetHeartRate, lowerEnd, upperEnd;
    int count = 3;
    string monthsInYear[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    while(count > 0){
    cout << "+--------------------------------+" << endl;
    cout << "|  TARGET-HEART-RATE CALCULATOR  |" << endl;
    cout << "+--------------------------------+" << endl;
    cout << "(You can run this program up to" << count << " more times.)" << endl;

    cout << "Enter your first name: ";
    cin >> firstName;
    cout << "Enter your last name: ";
    cin >> lastName;
    
    while (1){ //This loop checks if the month entered is actually a month.
        cout << "Enter birth month: ";
        cin >> birthMonth;
        int checker = 0;
        for (int i = 0; i < 12; i++){
                if (birthMonth == monthsInYear[i]){
                    checker = 1;
                    break;
                }
            }
        if (checker == 0){
            cout << "Month not found! Enter again." << endl;
        }
        else{
            break;
        }
    }
    while (1){ //This loop checks if the day entered is actually a day.
        cout << "Enter birth day: ";
        cin >> birthDay;
        if (birthDay < 1 || birthDay > 31){
            cout << "Invalid input! Please enter a number between 1-31." << endl;
        }
        else if (birthDay == 31 && (birthMonth == "April" || birthMonth == "June" || birthMonth == "September" || birthMonth == "November")){
            cout << "Invalid input! Please enter a number between 1-30." << endl;
        }
        else if (birthDay == 29 && birthMonth == "February"){
            cout << "Invalid input! Please enter a number between 1-28." << endl;
        }
        else{
            break;
        }
    }
    cout << "Enter birth year: ";
    cin >> birthYear;

    while (1){ //This loop checks if the month entered is actually a month.
        cout << "Enter current month: ";
        cin >> currentMonth;
        int checker = 0;
        for (int i = 0; i < 12; i++){
                if (currentMonth == monthsInYear[i]){
                    checker = 1;
                    break;
                }
            }
        if (checker == 0){
            cout << "Month not found! Enter again." << endl;
        }
        else{
            break;
        }
    }

    while (1){ //This loop checks if the day entered is actually a day.
        cout << "Enter current day: ";
        cin >> currentDay;
        if (currentDay < 1 || currentDay > 31){
            cout << "Invalid input! Please enter a number between 1-31." << endl;
        }
        else if (birthDay == 31 && (birthMonth == "April" || birthMonth == "June" || birthMonth == "September" || birthMonth == "November")){
            cout << "Invalid input! Please enter a number between 1-30." << endl;
        }
        else if (birthDay == 29 && birthMonth == "February"){
            cout << "Invalid input! Please enter a number between 1-28." << endl;
        }
        else{
            break;
        }
    }
    cout << "Enter current year: ";
    cin >> currentYear;

    cout << "+--------------------------+" << endl;
    cout << "|  Heart Rate Information  |" << endl;
    cout << "+--------------------------+" << endl;

    count--;
    }
    
}