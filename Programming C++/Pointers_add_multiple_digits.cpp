/*Use the pointer to write the prototype function:

void sum_multiple (int number, int * sum, int * multiple)

which for the forwarded account number is the sum and the number of its digits. 
When computing a montage, ignore the digits of the same zero.
In the main function, print the calculated values.*/
#include<iostream>
void sum_multiple(int number, int* sum, int* mulitple) {
	while (number > 0) {
		if (number % 10 == 0) {
			number /= 10;
			continue;
		}
		*sum += number % 10;
		*mulitple *= number % 10;
		number /= 10;
	}
}
int main() {
	int number=123456;
	int sum=0;
	int multiple=1;
	sum_multiple(number, &sum, &multiple);
	std::cout << "For number " << number << " sum od digits is " << sum << " and multiple of digits is " 
		<< multiple << std::endl;
	return 0;
}

