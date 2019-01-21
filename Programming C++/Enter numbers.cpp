/*The user inputs the numbers until they enter a number that can not be divisible by 3 or 5.
Print the statistics of numbers by partition.
For example, for a series of numbers: 9, 15, 21, 40, 35, 6,30 prints must look like:
There are 3 numbers divisible by 3.
There are 2 numbers divisible by 5.
There are 2 numbers divisible by 3 and 5.*/

#include<iostream>

int main() {
	int number;
	int divisible_three=0;
	int divisible_five=0;
	int divisible_both=0;
	

	
	while (1) {
		std::cout << "Enter number->";
		std::cin >> number;

		if ((number % 5 == 0) && (number % 3 == 0)) {
			++divisible_both;
		}
		else if (number % 3==0) {
			++divisible_three;
		}
		else if (number % 5 == 0) {
			++divisible_five;
		}
		else  {
			break;
		}
	}
	std::cout << "There are " << divisible_three << " numbers divisible by 3" << std::endl;
	std::cout << "There are " << divisible_five << " numbers divisible by 5" << std::endl;
	std::cout << "There are " << divisible_both << " numbers divisible by 3 and 5" << std::endl;
}