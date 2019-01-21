/*Write the prototype function implementation: double kilometers (double city_a, double city_b); 
which receives as the value of the number of kilometers on which the exit for the city concerned is 
located (eg city of 120 km, city of 345 km). 
The function returns the distance between the two cities (make sure the value is not negative).
Using the above function, write the implementation of the function 
that counts and prints the time it takes to get from City A to City B with an average speed of 80 km / h. 
For example, the function should print "The time required is 2 hours and 48 minutes".
Test the function of the function in the main program.
*/

#include<iostream>

double kilometers(double city_a,double city_b) {
	
	if (city_a > city_b)
		return city_a - city_b;
	else
		return city_b - city_a;
}

void count_time(double speed, double city_a, double city_b) {

	int hours = kilometers(city_a, city_b) / speed;
	int minutes = (kilometers(city_a, city_b) / speed) * 100;
	minutes = (minutes % 100)*0.6;
	
	std::cout << "The time required is " << hours << " hours " << "and " << minutes << " minutes" << std::endl;
}

int main(){
	double city_a;
	double city_b;
	double speed;

	std::cout << "Enter City A distance->";
	std::cin >> city_a;
	std::cout << "Enter City B distance->";
	std::cin >> city_b;
	std::cout << "Enter speed->";
	std::cin >> speed;

	count_time(speed, city_a, city_b);

	return 0;
}