/*
Write a class that calculates the body mass index. 
The body mass index is calculated by the formula: kg / m2, ie the number of pounds per square in height. 
So for a person with a weight of 70 and a height of 1.80 m, the index should amount to 21.6.
In accordance with the table test the class in the main program, 
write in which category the person for which the data were entered.

BMI Classification
  <20 Underweight
  20 - 25 Ideal weight
25 - 30 Excessive body mass
  > 30 Obesity

If a person does not fall into the category of Ideal Weight,
call a function that counts how much a person should have a kilograms to have a body mass index 22.*/
#include<iostream>
class MassIndex {
	double weight;
	double height;
	void counts_mass_index(double);
	~MassIndex() {}
public:
	MassIndex(double weight, double height) :weight(weight), height(height) {}
	void classification();
	
};
void MassIndex::classification() {
	double body_mass_index = (this->weight) / (height*height);
	if (body_mass_index < 20) {
		std::cout << "Underweight" << std::endl;
		counts_mass_index(body_mass_index);
	}
	else if(body_mass_index>=20&&body_mass_index<=25){
		std::cout << "Ideal weight: your BMI is "<<body_mass_index << std::endl;
	}
	else if (body_mass_index > 25 && body_mass_index <= 30) {
		std::cout << "Excessive body mass" << std::endl;
		counts_mass_index(body_mass_index);
	}
	else if (body_mass_index > 30) {
		std::cout << "Obesity" << std::endl;
		counts_mass_index(body_mass_index);
	}
}
void MassIndex::counts_mass_index(double body_mass_index){
	std::cout << "You should have " << 22.0 * (height*height) << "kg to have BMI 22" << std::endl;
}

int main() {
	MassIndex* m = new MassIndex(70, 1.8);
	m->classification();
}

