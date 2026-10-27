#include <iostream>
double product(double x, double y)
{
	return x*y;
}
double factor_one;
double factor_two;
int main()
{
	for (int i = 0; i < 5; i++)
	{
		std::cout << "Enter two numbers seperated by a single space: ";
		std::cin >> factor_one >> factor_two;
		std::cout << "The product is: " << product(factor_one, factor_two) << "\n";
	}
	return 0;
}