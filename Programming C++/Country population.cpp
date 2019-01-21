/*Write a class that receives information 
about the current population of a country (in 2018), 
the percentage of the expected annual population growth, and the state surface in km^2. 
The function should return a year in which population 
density is expected to exceed 500 inhabitants per km^2.*/

#include<iostream>

class Country {
	unsigned population;
	float growth;
	unsigned state_surface;
	~Country() {};
public:
	Country(unsigned population,float growth,unsigned state_surface):population(population),
		growth(growth/100),state_surface(state_surface){};
	int year_inhabitants_per_km();
};

int Country::year_inhabitants_per_km() {
	unsigned year = 2018;
	unsigned inhabitants_per_km = population / state_surface;
	while (inhabitants_per_km <=500) {
		population += population * growth;
		inhabitants_per_km = population / state_surface;
		++year;
	}
	return year;
}

int main(){
	Country* c=new Country(4000000,10,56594);
	std::cout << "Year is->" << c->year_inhabitants_per_km() << std::endl;
	return 0;
}