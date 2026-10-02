#include <string>
#include <iostream>
int main()
{
	std::string name;
	double x1;
	double x2;
	double y1;
	double y2;
	std::cout << "Enter your name: ";
	std::getline(std::cin, name);
	std::cout << "x1 = ";
	std::cin >> x1;
	std::cout << "x2 = ";
	std::cin >> x2;
	std::cout << "y1 = ";
	std::cin >> y1;
	std::cout << "y2 = ";
	std::cin >> y2;
	std::cout << name << ", the midpoint of the line segment is (" << (x1 + x2) / 2 << ", " << (y1 + y2) / 2 << ")." << std::endl;
	return 0;
}