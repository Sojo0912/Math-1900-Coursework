#include <iostream>
int main()
{
	double voltage;
	std::cout << "Please enter the voltage \n";
	std::cin >> voltage;
	bool issafe = (voltage > 5);
	std::cout << issafe << "\n";
	if (issafe)
	{
		std::cout << "Voltage is not within saferange.";
	}
	else
	{
		std::cout << "Voltage is within saferange.";
	}
	return 0;
}