/*Make an object that receives 2 positive numbers 
as a range and counts and prints all the numbers between that 2 numbers that are divisible by 2 and
are not divisible by 3.
Count how many such numbers were and print that number.
Test the object in the main program. 
example: input=1,10, output=3 (2,4,8)
*/

#include<iostream>

class Divisible {
	
	int num_a;
	int num_b;
	int count;

public:
	Divisible(int num_a, int num_b) :num_a(num_a),num_b(num_b){
		count = 0;
		for (int i = num_a+1; i < num_b; ++i) {
			if ((i % 2 == 0) && (i%3!=0)) {
				++count;
			}
		}
		std::cout << "Number is " << count << std::endl;
	}
	~Divisible() {}
};

int main() {

	Divisible d(1, 10);

	return 0;
}