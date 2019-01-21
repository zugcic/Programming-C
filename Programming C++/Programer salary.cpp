/*The company's work hour is paid 200 kn if it is done within working time, 
and twice more if it is done outside of it. 
The working time is Monday to Friday, 09-17h. 
Ask the user the number of days (1-Monday, 7-Sunday), the start and end time 
(at least one must be within working hours), 
and calculate the total cost that a company has to pay to its employee.*/

#include<iostream>

int main() {

	int day=7;
	int start_time=20;
	int end_time=9;
	int salary=0;

	std::cout << "Enter day in week->";
	std::cin >> day;

	std::cout << "Enter start time->";
	std::cin >> start_time;

	std::cout << "Enter end time->";
	std::cin >> end_time;

	while (true){
		if (day > 5) { //rad vikendom
			salary += 400;
			start_time += 1;
			if (start_time == 24) {
				start_time = 0;
				day+=1;

				if (day == 8) {
					day = 1;
				}
			}
			if (start_time == end_time)
				break;
			continue;
		} 
		else { //rad u tjednu (ponedjeljak-petak)
			 if (start_time >= 17 && end_time < 9) { //radno vrijeme iza 17
				salary += 400;
				start_time += 1;
				if (start_time == 24) {
					start_time = 0;
					day += 1;
				}
				if (start_time == end_time)
					break;
				continue;
			 }
				
			 else if (start_time < 9 && end_time <= 17) { //radno vrijeme prije 9
				 salary += 400;
				 start_time += 1;
				 if (start_time == end_time)
					 break;
				 continue;
			 }
			 
			 else if(start_time >= 9 && end_time <= 17){ //unutar radnog vremena (ponedjeljak-petak)
				salary += 200;
				start_time += 1;
				if (start_time == end_time)
					break;
				continue;
			 }
		}
	}
	std::cout << salary << std::endl;
	return 0;
}