#include <iostream>
#include <string>

const double Pi = 3.141592;

/*
	some nice information about the constant Pi
	http://www.math.com/tables/constants/pi.htm
*/

int main()
{
	double
		circleRadius,
		circleArea,
		circleCircumference
	;

	std::cout << "Circle Circumference and Area Calculator!" << std::endl;

	std::cout << "Insert value of circle radius: ";
	std::cin >> circleRadius;

	circleArea = Pi * (circleRadius * circleRadius);
	std::cout << std::endl << "Area of the circle: " << circleArea;

	circleCircumference = 2 * Pi * circleRadius;
	std::cout << std::endl << "Circumference of the circle: " << circleCircumference;

	return 0;
}
