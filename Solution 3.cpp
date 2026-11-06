#include <iostream>
const int SIZE = 3;
double prices[SIZE] = { 2.5, 4.00, 1.25 };
int quantities[SIZE] = { 4, 2, 8 };
double orderTotal(double a, double b, double c, double d, double e, double f);
int main()
{
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << "Item " << i + 1 << ": " << prices[i] << " x " << quantities[i] << " = " << prices[i] * quantities[i] << "\n";
	}
	std::cout << "Total: " << orderTotal(prices[0], quantities[0], prices[1], quantities[1], prices[2], quantities[2]) << "\n";
	return 0;
}
double orderTotal(double a, double b, double c, double d, double e, double f)
{
	return a * b + c * d + e * f;
}