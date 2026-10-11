#include <iostream>
#include <fstream>
#include <string>
int main()
{
	int count = 0;
	int secret_number;
	int guess = 0;
	std::cout << "Enter a secret number from one to ten: \n";
	std::cin >> secret_number;
	while (guess != secret_number)
	{
		count++;
		std::cout << "Enter guess number "<< count << ": \n";
		std::cin >> guess;
	}
	std::cout << "You took " << count << " guesses.\n";
	return 0;
}