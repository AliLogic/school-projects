#include <iostream>

int val = 10;

int* returnPointerAddr() {
	
	return &val;
}

int main() {
	
	std::cout << "Pointer memory location: " << returnPointerAddr();
	std::cout << "Pointer value: " << *returnPointerAddr();
	
	return 1;
}