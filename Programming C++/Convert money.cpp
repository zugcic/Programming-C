/*
Write a program that will accept the value in kunas and one letter and depending on the entered letter to call a specific function to convert the kuna into euros, dollars and pounds.
● Option E: Call to convert the kuna to euros. The calculated value is printed in the main program
● Option D: Call to convert kuna to dollars. The calculated value is printed in the function
● Option P: Call to convert the kuna to pound. The calculated value is printed in the main program
● Option X: Exiting the program
If another letter is entered, it is necessary to print a message that the letter is incorrect and request a re-entry from the user.
The program is implemented in a way that allows the amount and option to be entered until the letter X is entered.
1 € = 7.5 kn
1 $ = 5.5 kn
1 £ = 9.2 kn*/

#include<iostream>

double convert_euros(double kuna) {
	return kuna / 7.5;
}
double convert_dolars(double kuna){
	return kuna / 5.5;
}
double convert_pounds(double kuna) {
	return kuna / 9.2;
}

int main() {
	double kuna;
	char letter;


	while (1) {
		std::cout << "Enter kunas-->";
		std::cin >> kuna;
		std::cout << "Enter letter->";
		std::cin >> letter;

		switch (letter) {

			case 'E': {
				std::cout << kuna << " kn=" << convert_euros(kuna) << " euros" << std::endl;
				continue;
			}
			case 'D': {
				std::cout << kuna << " kn=" << convert_dolars(kuna) << " dolars" << std::endl;
				continue;
			}
			case 'P': {
				std::cout << kuna << " kn=" << convert_pounds(kuna) << " pounds" << std::endl;
				continue;
			}
			case'X': {
				std::cout << "End program" << std::endl;
				break;
			}
			default: {
				std::cout << "Incorrect letter, repat entry" << std::endl;
				continue;
			}
		}
		break;
	}
}

	
