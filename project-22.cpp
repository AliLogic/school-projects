/*
	Write a program to print the following
	pattern:

	1
	22
	333
	4444
	55555
*/

#include <iostream>

int main()
{
	for (int i = 1; i < 6; i++)
	{
		for (int j = 0; j < i; j ++)
		{
			std::cout << i;
		}
		std::cout << std::endl;
	}
	return 0;
}
