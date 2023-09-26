#include <iostream>
#include <string>
#define TEXTINPUT_H

void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int getIntFromUser() {
    while (true) {
        int userNumber{};
        std::cin >> userNumber;
        if (!std::cin) {
            std::cin.clear();
            ignoreLine();
            std::cout << "input is invalid, Please try again.\n";
        }
        else {
            ignoreLine();
            return userNumber;
        }
    }
};

int getIntFromUserInRange(int min, int max) {

    while (true) {
        int userNumber{ getIntFromUser() };
        if (userNumber < min || userNumber > max) {
            std::cout << "Invalid input. Range is " << min << " to " << max << " Please try again" << std::endl;

        }
        else {
            return userNumber;
        }
    }
}

int promptForYear();
// prompt the user for the year and return the result

int promptForMonth();
// prompt the user for the month and return the result

int promptForDayOfMonth();
// prompt the user for the day of the month (0-31) and return the result

Weekday calculateWeekday(int month, int dayOfMonth, int year);
// use Zeller’s congrunce algorithm to calculate and return a Weekday

std::string getWeekdayName(Weekday day);

// There isn’t a straightforward way of printing out the text representation of an
// enumerated type,so we’ll write our own
// Given a Weekday, return a string to represent its name.
// You can do this in several ways:
// 1. multiple if/else if statements
// 2. a switch statement
// 3. create an array of string literals, and index the array by
// doing a static_cast on the Weekday to get its int representation.
//The third option is the best(most elegant / extensible).
//To do this, you need to know how to create an array of string objects(see
//   below) :
//eg: std::string myArray[] = { "a", "b", “c” }; .

int main() {


    return 0;
}