#include <iostream>
using namespace std;

class HeartRates {
private: 
    string firstName;
    string lastName;
    string birthMonth;
    int birthDay;
    int birthYear;

public:
    int getAge(string birthMonth, int birthDay, int birthYear) const{
        cout << "Enter birth month: ";
        cin >> birthMonth;
        cout << "Enter birth day: ";
        cin >> birthDay;
        cout << "Enter birth year: ";
        cin >> birthYear;

        cout << "Date of Birth:" << birthMonth << " " << birthDay << ", " << birthYear << endl;
        cout << "Age: " << 2025 - birthYear << endl;

        return 2025 - birthYear;
    }

    int getMaximumHeartRate(int age) const{ //According to the internet, the maximum heart rate is 220 - age
        cout << "Maximum Heart Rate: " << 220 - age << " bpm" << endl;
        return 220 - age;
    }

};


int main() {
    
    return 0;
}