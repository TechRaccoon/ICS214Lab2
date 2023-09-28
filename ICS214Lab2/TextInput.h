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


#endif 

