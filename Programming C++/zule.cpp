#include<C:\Users\Student\Desktop\Programming C++\Programming C++\zule.h>

unsigned int zule::number_of_digits(int number) { 
	unsigned int size = 0;
	while (number > 0) {
		number /= 10;
		++size;
	}
	return size;
}