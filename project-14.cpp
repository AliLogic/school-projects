/*
	Write a program to print the sum of
	first 10 positive numbers.
*/

#include <iostream>

int main()
{
	int
		sum = 0
	;

	for (int i = 1; i < 11; i++)
	{
		sum += i;
		std::cout << sum << std::endl;
	}

	std::cout << "Sum of first 10 positive numbers: " << sum;
	return 0;
}
