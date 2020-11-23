/*
	Write a program to read and find even or odd number.
*/

#include <iostream>

int main()
{
	int
		number
	;

	std::cout << "Input a number of which you would like to check is even or odd:" << std::endl;
	std::cin >> number;

	std::cout << number << ": " << (number % 2 ? "Odd" : "Even") << std::endl;

	return 0;
}
