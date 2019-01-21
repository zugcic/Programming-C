/*
Allow the user to enter positive numbers. The user inputs the numbers until they enter zero. 
The entered numbers need to be summed up and you should print the smallest and the largest number. 
If a user inserts a negative number, that number should be ignored and skip this looping iteration.
Use break and continue commands.
*/

#include <iostream>

int main() {
	
	int number;
	int smallest;
	int largest;
	int sum=0;

	std::cout << "Enter number->";
	std::cin >> number;
	sum += number;

	smallest = number;
	largest = number;

	while (1) {

		std::cout << "Enter number->";
		std::cin >> number;
		if (number == 0) {
			break;
		}
		if (number < 0) {
			continue;
		}
		sum +=number;
		if (number < smallest) {
			smallest = number;
		}
		if (number > largest) {
			largest = number;
		}
		continue;
	}

	
	std::cout << "Smallest number is->" << smallest << std::endl;
	std::cout << "Largest number is->" << largest << std::endl;
	std::cout << "Sum numbers is->" << sum << std::endl;

}