/*
Write a function that receives two sets of integers of the same length, 
and returns 1 if the second string is the inverse version of the first and 0 otherwise.
Eg. the inverse version of the series 5, 2, 8, 6 is a sequence of 6, 8, 2, 5.*/

#include<array>
#include<iostream>
typedef std::array<int, 4> my_array;


int inverse(my_array** a1, my_array** a2) {
	int flag = 0;
	for (int i = 0; i < (*a1)->size(); ++i) {
		if ((*a1)->at(i) == (*a2)->at((*a1)->size()-i))
			continue;
		else
			++flag;
	}
	if (flag == 0)
		return 1;
	else
		return 0;
}

int main() {
	my_array* a1=new my_array();
	my_array* a2 = new my_array();
	a1->fill(4);
	a2->fill(5);
	std::cout << inverse(&a1, &a2)<<std::endl;
	return 0;
}