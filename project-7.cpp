#include <iostream>

int main()
{
	int
		inputs[3],
		max,
		min
	;

	std::cout << "Input three numbers:" << std::endl;;
	for (int i = 0; i < 3; i ++)
	{
		std::cin >> inputs[i];
	}

	for (int i = 0; i < 3; i ++)
	{
		if (inputs[i] > inputs[max])
		{
			max = i;
		}
		else if (inputs[i] < inputs[min])
		{
			min = i;
		}
	}

	std::cout << "Maximum number:" << inputs[max] << std::endl;
	std::cout << "Minimum number:" << inputs[min] << std::endl;
	return 0;
}
