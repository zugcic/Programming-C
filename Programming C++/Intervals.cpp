/*Write a function that receives the lower (min) and upper (max) 
limits of the intervals of natural numbers and a number n. 
The function returns the largest number of intervals (min, max) 
that can be divisible by the default n. If such a number does not exist the function returns -1.*/
#include<iostream>
 int intervals(unsigned int min, unsigned int max, unsigned int n) {
	unsigned int largest=0;

	for (int i = min; i <= max; ++i) {
		if (i%n == 0) {
			largest = i;
			continue;
		}
	}
	if (largest == 0)
		return -1;
	else
		return largest;
}

int main() {
	std::cout << intervals(1, 10, 3)<<std::endl;
	return 0;
}