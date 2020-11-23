/*
	Write a program to print the sum of
	first 20 even numbers.
*/

#include <iostream>

int main()
{
	int
		sum = 0
	;

	for (int i = 1; i < 21; i++)
	{
		if (i % 2)
		{
			continue;
		}

		sum += i;
	}

	std::cout << "Sum of first 20 even numbers: " << sum;
	return 0;
}
