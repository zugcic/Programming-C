/*Tribonacci numbers are a series of numbers similar to Fibonacci numbers, but with
the difference is that each Tribonacci's number is obtained by summing up the three previous Tribonaccies
number:
T (1) = 1
T (2) = 1
T (3) = 2
T (n) = T (n-1) + T (n-2) + T (n-3)
Write a program that will print the 11th Tribonacci's number.*/
#include<iostream>
int main() {
	int tribonacci[11] = {0};
	tribonacci[0] = 1;
	int i = 1;
	int j;
	std::cout << tribonacci[0] << std::endl;
	while (i < 11) {
		j = i - 1;
		while (j >= 0) {
			tribonacci[i] += tribonacci[j];
			--j;
		}
		std::cout << tribonacci[i] << std::endl;
		++i;
	}
	
	return 0;
	

}