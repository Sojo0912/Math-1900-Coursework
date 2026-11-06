#include <iostream>
const int SIZE = 5;
int values[SIZE] = { 0, 10, 2, 4, 10 };
int main() 
{
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << values[i] << " "; 
	}
	std::cout << "\n";
	for (int i = 0; i < 5; i++)
	{
		std::cout << values[i] << "\n";
	}
	for (int i = 4; i >= 0; i--)
	{
		std::cout << values[i] << " ";
	}
	return 0;
}