#include <iostream>
#include "TextInput.h"



int promptForYear() {
    std::cout << "Enter a year (e.g., 2012): ";
    return getIntFromUser();
};


int promptForMonth() {
    std::cout << "Enter a month: 1-12: ";
    return getIntFromUserInRange(1, 12);
};

int promptForDayOfMonth() {
    std::cout << "Enter a day : 0-31: ";
    return getIntFromUserInRange(0, 31);
};

Weekday calculateWeekday(int month, int dayOfMonth, int year) {

    int formulaMonth{ 0 };
    int century = { year / 100 };
    int yearOfCentury = { year % 100 };

    if (month < 3) {
        formulaMonth = month + 12;
        year--;
    };

    int weekDay{ (dayOfMonth + ((26 * (formulaMonth + 1)) / 10) + yearOfCentury + (yearOfCentury / 4) + (century / 4) + (5 * century)) % 7 };

    /*switch (weekDay) {
    case 1: return Weekday::Saturday;
    case 2: return Weekday::Sunday;
    case 3: return Weekday::Monday;
    case 4: return Weekday::Tuesday;
    case 5: return Weekday::Wednesday;
    case 6: return Weekday::Thursday;
    case 7: return Weekday::Friday;
    }*/

    return static_cast<Weekday>(weekDay);

};

std::string getWeekdayName(Weekday day) {
    std::string myArray[] = { "Saturday", "Sunday", "Monday", "Tuesday","Wednesday","Thursday","Friday"};
    return myArray[(int)day];
   
};