#include <iostream>

int iVal = 420;
char cVal = 'C';
double dVal = 6.66;
float fVal = 9.9;

int* returnIntPtr() {
	
	return &iVal;
}

char* returnCharPtr() {
	
	return &cVal;
}

double* returnDoublePtr() {
	
	return &dVal;
}

float* 	returnFloatPtr() {

	return &fVal;
}

int main() {

	std::cout << "\nFloat value (" << returnFloatPtr() << ") Memory location (" << *returnFloatPtr() << ")\n";
	std::cout << "\nDouble value (" << returnDoublePtr() << ") Memory location (" << *returnDoublePtr() << ")\n";
	std::cout << "\nChar value (" << returnCharPtr() << ") Memory location (" << *returnCharPtr() << ")\n";
	std::cout << "\nInt value (" << returnIntPtr() << ") Memory location (" << *returnIntPtr() << ")\n";

	return 1;
}