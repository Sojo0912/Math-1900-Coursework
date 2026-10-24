#include <iostream>
#include <string>
int c = 0;
int main()
{
	for (int i = 1; i <= 5; i++)
	{
		std::cout << "Enter two numbers seperated by one space: ";
		std::string input;
		std::getline(std::cin, input);
		int index = input.find(' '); //This line finds the index of the space so that multi digit numbers may be entered and accurately retrieved.
		input[index] = '*';
		std::cout << "\n" << "What is the product of " << input << ": ";
		double answer;
		std::cin >> answer;
		std::cin.ignore();
		double a = std::stod(input.substr(0, index)); 
		double b = std::stod(input.substr(index + 1)); //Doubles make decimals possible, but the program will still work with integers. The program is designed to accept any input as long as it is two numbers separated by a space.
		if (answer == a*b)
		{
			c++;
			std::cout << "Correct! " << c << " out of 5 correct, " << 5 - i << " questions remaining." << "\n";
		}
		else
		{
			std::cout << "Sorry :( Try Again. " << c << " out of 5 correct, " << 5 - i << " questions remaining." << "\n";
		}
	}
	std::cout << "You got " << c << " out of 5 correct." << "\n";
	return 0;
}