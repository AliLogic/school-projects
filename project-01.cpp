#include <iostream>
#include <string>

int main()
{
	std::cout << "Biodata Form" << std::endl;

	std::string
		firstName,
		lastName,
		className,
		groupName,
		houseName,
		grNo
	;

	std::cout << std::endl << "What is your first name? ";
	getline(std::cin, firstName);

	std::cout << std::endl << "What is your last name? ";
	getline(std::cin, lastName);

	std::cout << std::endl << "What is your GR#? ";
	getline(std::cin, grNo);

	std::cout << std::endl << "What is your class? ";
	getline(std::cin, className);

	std::cout << std::endl << "What is your group? ";
	getline(std::cin, groupName);

	std::cout << std::endl << "What is your house? ";
	getline(std::cin, houseName);

	std::cout << "Outputting Form" << std::endl;

	std::cout << "Name: " << firstName << " " << lastName << std::endl;
	std::cout << "GR#: " << grNo << std::endl;
	std::cout << "Class: " << className << std::endl;
	std::cout << "Group: " << groupName << std::endl;
	std::cout << "House: " << houseName << std::endl;

	return 0;
}
