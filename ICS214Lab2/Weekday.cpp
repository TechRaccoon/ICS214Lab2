#include <iostream>
#include "TextInput.h"


//prompts the user for the year in int, returns it
int promptForYear() {
    std::cout << "Enter a year (e.g., 2012): ";
    return getIntFromUser();
};

//prompts the user for the month of the yea in int, returns it 
int promptForMonth() {
    std::cout << "Enter a month: 1-12: ";
    return getIntFromUserInRange(1, 12);
};

//prompts the user for the specif day of the month, range 1-12, returns it 
int promptForDayOfMonth() {
    std::cout << "Enter a day : 0-31: ";
    return getIntFromUserInRange(0, 31);
};

//zellers formula to calculate the the specific day of the week given year, day and month 
Weekday calculateWeekday(int month, int dayOfMonth, int year) {

    int formulaMonth{ 0 };
    
    if (month < 3) {
        formulaMonth = month + 12;
        year--;
    };

    int century = { year / 100 };
    int yearOfCentury = { year % 100 };

    int weekDay{ (dayOfMonth + ((26 * (formulaMonth + 1)) / 10) + yearOfCentury + (yearOfCentury / 4) + (century / 4) + (5 * century)) % 7 };

    //use of switch because I didnt used it in the rest of the code but the lab require it ....alternative to the code below
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

// returns a string of the day of the month based on the Enum index
std::string getWeekdayName(Weekday day) {
    std::string myArray[] = { "Saturday", "Sunday", "Monday", "Tuesday","Wednesday","Thursday","Friday"};
    return myArray[(int)day];
   
};