#include <iostream>
#ifndef TEXTINPUT_H
#define TEXTINPUT_H

//enum for the days of the week, using Zellers formula to start with saturday
enum class Weekday {
    Saturday,
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,

};

void ignoreLine();
int getIntFromUser();
int getIntFromUserInRange(int min, int max);

//prompts the user for the year in int, returns it
int promptForYear();

//prompts the user for the month of the yea in int, returns it
int promptForMonth();

//prompts the user for the specif day of the month, range 1-12, returns it 
int promptForDayOfMonth();

//zellers formula to calculate the the specific day of the week given year, day and month 
Weekday calculateWeekday(int month, int dayOfMonth, int year);

// returns a string of the day of the month based on the Enum index
std::string getWeekdayName(Weekday day);



#endif 

