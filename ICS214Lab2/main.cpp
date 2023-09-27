#include <iostream>
#include "TextInput.h"


int main() {
	/*std::cout << "Test: " << getWeekdayName(Weekday::Tuesday) << std::endl;
	return 0;*/

	while (true) {
		
		std::cout <<"Day of the week is " << getWeekdayName(calculateWeekday(promptForMonth(), promptForDayOfMonth(), promptForYear())) << std::endl;
		break;
	}
}