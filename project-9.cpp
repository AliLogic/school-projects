/*
	Write a program to print the multiplication table of N
	number from 1 to 20.
*/

#include <iostream>

int main()
{
	int
		number
	;

	std::cout << "Input a number of which you would like to print multiples of upto 20 times:" << std::endl;;
	std::cin >> number;

	for (int i = 1; i != 21; i ++)
	{
		std::cout << number << " * " << i << " = " << number * i << std::endl;
	}

	return 0;
}
