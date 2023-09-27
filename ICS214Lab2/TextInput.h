#include <iostream>
#ifndef TEXTINPUT_H
#define TEXTINPUT_H

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
int promptForYear();
int promptForMonth();
int promptForDayOfMonth();
Weekday calculateWeekday(int month, int dayOfMonth, int year);
std::string getWeekdayName(Weekday day);



#endif 

