#include <iostream>
#include <vector>

/*
	-----------------------------------------------------------------------------
	The use of Vectors was not asked, done only for the purpose to demonstrate
	to my class mates that there's a completely different way to do this as well.
	-----------------------------------------------------------------------------
*/

std::vector<int> numbers;

double calculateAverage() {

	int num = 0;

	for (std::vector<int>::iterator i = numbers.begin(); i != numbers.end(); i ++) {
		num += *i;
	}

	return (num / (int) numbers.size());
}

int main() {

	int	ask = 0,
		number = 0;

	while (!ask) {
		std::cout << "Insert the amount of numbers you wish to average: ";
		std::cin >> ask;
		std::cout << "\n";
		
		// sanity check so the programme may not break and result in an infinite loop later down the road!
		if (ask < 1) {
			std::cout << "You can't enter a number less than 1." << std::endl;
		}
	}

	while (--ask != -1) {
		std::cout << "Insert your number: ";
		std::cin >> number;
		numbers.push_back(number);
		std::cout << "Inserted " << number << "\n";
	}

	std::cout << "\nAverage: " << calculateAverage();
}