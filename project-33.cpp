#include <iostream>

// Constants

int const Pi = 3.14159;

// Definitions

void cylinder_CalculateVolume();
void sphere_CalculateVolume();
void cube_CalculateVolume();

void cylinder_CalculateVolume() {

	std::cout << "Volume Calculator for Cylinder" << std::endl;	
	
	double	radius,
			height;
	
	std::cout << "\nInput the Radius: ";
	cin >> radius;
	
	std::cout << "\nInput the Height: ";
	cin >> height;

	std::cout << "\nThe Volume of your Cylinder is: " << Pi * (radius * radius) * height;
}

void sphere_CalculateVolume() {

	std::cout << "Volume Calculator for Sphere" << std::endl;
	
	double	radius;
	
	std::cout << "\nInput the radius: ";
	cin >> radius;
	
	std::cout << "\nThe Volume of your Sphere is: " << 4 * Pi * (radius * radius * radius / 3);
}

void cube_CalculateVolume() {

	std::cout << "Volume Calculator for Cube" << std::endl;
	
	double	area;
	
	std::cout << "\nInput the Area: ";
	cin >> area;

	std::cout << "\nThe Volume of your Cube is: " << area * area * area << std::endl;
}

// main

int main() {
	
	cylinder_CalculateVolume();
	sphere_CalculateVolume();
	cube_CalculateVolume();

	return 0;
}
