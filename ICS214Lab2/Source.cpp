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

int main() {


    return 0;
}