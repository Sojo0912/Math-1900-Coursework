#include <iostream>
const double pi = 3.14159;
double radius;
double height;
double volume(double r, double h)
{
	return pi * r * r * h;
}
int main()
{
	std::cout << "Enter the radius of the cylinder ";
	std::cin >> radius;
	std::cout << "Enter the height of the cylinder ";
	std::cin >> height;
	std::cout << "The volume of the cylinder is: " << volume(radius, height) << "\n";
}
