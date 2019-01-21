/*Write a class that receives 2 numbers and checks that they are in the
second number of the same digits as in the first, but inverted order. 
The class function returns 1 if they are, and 0 if they are not.
For numbers 4567 and 7654, the function should return 1.
Test the class in the main program.*/

#include<iostream>

class Inverted{
	
	int num_a;
	int num_b;
	
	int check_number_digits(int num_a) { //broji koliko prvi broj ima znamenaka
		
		int count=0;
		while (num_a) {
			num_a/=10;
			++count;
		}
		return count;
	}
	public:
		Inverted(int num_a, int num_b) :num_a(num_a), num_b(num_b) {}
		~Inverted() {}

		int check_digits() {
			
			int inverted_num = 0;
			int number_digits_num_a = check_number_digits(num_a);
			while (num_a) {
				inverted_num += ((num_a % 10))*(pow(10,(number_digits_num_a - 1))); //pomnoi zadnju znamenku(ostatak) sa (10^3,10^2) i  pribroji ukupnom zbroju
				num_a /= 10;
				number_digits_num_a -= 1;
			}
			if (inverted_num == num_b)
				return 1;
			else
				return 0;
		}
};

int main() {

	Inverted *i = new Inverted(4567, 7654);
	std::cout<<i->check_digits()<<std::endl;
}