/*Create a program that receives a positive integer from the user and counts the number of digits in the number and prints the square of each digit.
For example, if a user entered No. 2319, the printout should look like this:
81
1
9
4
The number has 4 digits.*/

#include<iostream>

int main() {
	int number;
	int number_digit;
	int number_digit_count=0;

	std::cout << "Enter number->";
	std::cin >> number;
	if (number <= 0) {
		std::cout << "Error" << std::endl;
		return 1;
	}
	for (int i = 0; number > 0; ++i) {
		number_digit = number % 10;
		std::cout << number_digit * number_digit << std::endl;
		number /= 10;
		++number_digit_count;
		
	}
	std::cout << "Number have "<< number_digit_count << " digits" << std::endl;
}