//Prompt

//Given non - zero two integers N and M.The problem is to find the number closest to N 
//and divisible by M.If there are more than one such number, then output the one having 
//maximum absolute value.


#include <iostream>

#define PAUSE std::cout << "\n\n"; system("pause");


int main() {

	int closestTo;
	int divisibleBy;

	std::cin >> closestTo;
	std::cin >> divisibleBy;
	
	//positive search
	int largest_closest;
	int i = closestTo;
	while (true) {
		if (i % divisibleBy == 0) {
			largest_closest = i;
			break;
		}
		i++;
	}

	//negative search
	int smallest_closest;
	i = closestTo;
	while (true) {
		if (i % divisibleBy == 0) {
			smallest_closest = i;
			break;
		}
		
		i--;
	}

	std::cout << "L: " << largest_closest << " vs S: " << smallest_closest;

	int best_match;

	if (largest_closest - closestTo < closestTo - smallest_closest) {
		best_match = largest_closest;
	}
	else best_match = smallest_closest;

	std::cout << "\nBest Match: " << best_match;

	PAUSE;
	return 0;
}