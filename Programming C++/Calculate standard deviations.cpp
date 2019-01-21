/*Create a array of ANY SIZE with full numbers and fill it with random numbers in intervals 100 to 999. 
Write a class that will receive a array and calculate the standard derivation.
Steps to calculate standard deviations:
- Calculate the arithmetic middle
- For each number calculate the difference between it and the arithmetic middle, 
and this amount quadrupled. Summarize all the quadratic differences.
- Calculate the arithmetic middle of quadratic differences (variance)
- Calculate the variance root (standard deviation)
Example:
For numbers 600,470,170,430, the 300 arithmetic middle is 394.
The variance is 21 704 and the standard deviation is 147.32.
*/
#include<array>
#include<time.h>
#include<iostream>
#include<math.h>
#define MYSIZE 10
typedef std::array<int,MYSIZE> my_array;

class Deviation {
	my_array *a = new my_array();
public:
	Deviation(my_array**);
	int arithmetic_middle();
	int variance();
	double standard_deviation();
	~Deviation(){}
};

Deviation::Deviation(my_array** a) {
	for (int i = 0; i < MYSIZE; ++i) {
		this->a->at(i) = (*a)->at(i);
	}
}

int Deviation::arithmetic_middle() {
	int sum=0;
	for (int i = 0; i < MYSIZE; ++i) {
		sum += this->a->at(i);
	}
	return sum / MYSIZE;
}

int Deviation::variance() {
	int sum=0;
	for (int i = 0; i < MYSIZE; ++i) {
		sum += pow((this->a->at(i)) - (arithmetic_middle()), 2);
	}
	return sum / MYSIZE;
}

double Deviation::standard_deviation() {
	return sqrt(variance());
}

int main() {
	my_array *a=new my_array();
	srand(time(0));
	for (int i = 0; i<MYSIZE; ++i) { 
		a->at(i) = rand() % 999;
		if ((a->at(i)) < 100)
			a->at(i) += 100;
	}
	Deviation *d = new Deviation(&a);
	std::cout << "For numbers->";
	for (int i = 0; i < MYSIZE; ++i) {
		std::cout << a->at(i)<<" ";
	}
	std::cout << "artithmetic middle is " << d->arithmetic_middle()<<std::endl;
	std::cout << "The variance is " << d->variance() << " and the standard deviation is " << d->standard_deviation() << std::endl;
	return 0;
}

