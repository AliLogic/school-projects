#include <iostream>
#include <string>

/*
	metric units are better anyways lol
*/

int main()
{
	std::cout << "Temperature Converter" << std:endl;

	double
		centigradeTemp,
		fahrenheitTemp,
		kelvinTemp
	;

	std::cout << "Input the temperature in °C (Centigrade): ";
	std::cin >> centigradeTemp;

	fahrenheitTemp = ((9.0 / 5.0) * centigradeTemp) + 32;
	kelvinTemp = centigradeTemp + 273;

	std::cout << "Temperature in Centrigrade: " << centigradeTemp << "°C" << std::endl;
	std::cout << "Temperature in Fahrenheit: " << fahrenheitTemp << "°F" << std::endl;
	std::cout << "Temperature in Kelvin: " << kelvinTemp << std::endl;
}
