#include <iostream>

int main()
{
    int
        a,
        b,
        c
    ;

	std::cout << "Input value of a: " << std::endl;
	std::cin >> a;
	std::cout << "Value of a: " << a << std::endl;

	std::cout << "Input value of b: " << std::endl;
	std::cin >> b;
	std::cout << "Value of b: " << b << std::endl;

	std::cout << "Swapping values of a and b" << std::endl;
	
	c = a;
	a = b;
	b = c;

	std::cout << "Value of a: " << a << std::endl;
	std::cout << "Value of b: " << b << std::endl;
	
	return 0;
}
