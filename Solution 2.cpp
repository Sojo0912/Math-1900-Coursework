#include <iostream>
const int SIZE = 3;
double values[3];
int main()
{
	for (int a = 0; a < SIZE; a++)
	{ 
		std::cout << "Enter value " << a+1 << ": ";
		std::cin >> values[a];
	}
	std::cout << "You entered:\n";
	for (int b = 0; b < SIZE; b++)
	{
		std::cout << values[b] << "\n";
	}
	return 0;
}