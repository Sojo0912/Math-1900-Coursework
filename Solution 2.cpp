#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include<fstream>
int main()
{
	std::ofstream practice("practice.txt");
	int c = 0;
	srand(time(0));
	for (int i = 1; i <= 5; i++)
	{
		int a = rand() % 12 + 1;
		int b = rand() % 12 + 1;
		std::cout << "\n" << "What is the product of " << a <<  "*" << b << ": ";
		double answer;
		std::cin >> answer;
		if (answer == a * b)
		{
			c++;
			std::cout << "Correct! " << c << " out of 5 correct, " << 5 - i << " questions remaining." << "\n";
		}
		else
		{
			std::cout << "Sorry :( Try Again. " << c << " out of 5 correct, " << 5 - i << " questions remaining." << "\n";
			practice << a << " * " << b << " = ?" << "\n";
		}
	}
	std::cout << "You got " << c << " out of 5 correct." << "\n";
	practice.close();
	return 0;
}