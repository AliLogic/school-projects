#include <iostream>
#include <string>

int main()
{
	int
		a,
		b,
		k
	;

	std::cout << "(a+b)^3 Equation Solver" << std::endl;
	std::cout << "(a+b)^3 = (a^3 + 3a^2b + 3ab^2 + b^3)" << std::endl;

	std::cout << "Insert value of a:" ;
	std::cin >> a;

	std::cout << "Insert value of b:" ;
	std::cin >> b;

	k = (a * a * a) + (3 * (a * a) * b) + (3 * a * (b * b)) + (b * b * b);
	std::cout << "Answer: " << k;

	return false;
}
