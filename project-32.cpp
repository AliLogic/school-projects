#include <iostream>

// Constants

int const Pi = 3.14159;

// Definitions

void circle_CalculateArea();
void triangle_CalculateArea();
void parallelogram_CalculateArea();

void circle_CalculateArea() {

	std::cout << "\nArea Calculator for Circle" << std::endl;

	double radius;
	
	std::cout << "\nInput the Radius: ";
	std::cin >> radius;

	std::cout << "\nThe Area of your Circle is: " << Pi * (radius * radius);
}

void triangle_CalculateArea() {

	std::cout << "\nArea Calculator for Triangle" << std::endl;
	
	double	base, 
			height;
	
	std::cout << "\nInput the Base: " << std::endl;
	cin >> base;
	
	std::cout << "\nInput the Height: " << std::endl;
	cin >> height;
	
	std::cout << "\nThe Area of your Triangle is: " << (height * base) / 2.0 << std::endl;
}

void parallelogram_CalculateArea() {

	std::cout << "\nArea Calculator for Parallelogram" << std::endl;
	
	double	base,
			height;
	
	std::cout << "\nInput the Base: " << std::endl;
	cin >> base;
	
	std::cout << "\nInput the Height: " << std::endl;
	cin >> height;

	std::cout << "\nThe Area of your Parallelogram is: " << base * height << std::endl;
}

// main

int main() {
	
	circle_CalculateArea();
	triangle_CalculateArea();
	parallelogram_CalculateArea();

	return 0;
}