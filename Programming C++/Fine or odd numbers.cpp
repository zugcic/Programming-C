/*Load a positive number of users and perform the following sequence of operations:
- If the number is fine, divide it with two
- If the number is odd multiplied by 3 and add 1
- Repeat these steps until you get 1, and then print each step.
- Finally, print the number of operations performed.

If the initial value is less than 1, print the word "error"
*/

#include<iostream>

int main() {

	int number;
	int step=0;
	
	std::cout << "Enter number->";
	std::cin >> number;
	std::cout << "Start value:" << number << std::endl;
	

	do {

		if (number < 1) {
			std::cout<<"Error"<< std::endl;
			break;
		}
		if (number % 2 == 0) {
			number /= 2;
			if (number == 1) {
				++step;
				std::cout << "Final value:" << number << "," << "Step number:" << step << std::endl;
				break;
			}
			std::cout << "Next value:" << number << std::endl;
			++step;
			continue;
		}
		else {
			number *= 3;
			number += 1;
			if (number == 1) {
				++step;
				std::cout << "Final value:" << number << "," << "Step number:" << step << std::endl;
				break;
			}
			std::cout << "Next value:" << number << std::endl;
			++step;
			continue;
		}
		
	} while (1);

	

	
}