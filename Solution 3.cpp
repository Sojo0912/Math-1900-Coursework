#include <iostream>
#include <fstream>
#include <string>
int main()
{
	int count = 0;
	std::ofstream attempts("attempts.txt");
	std::cout << "Enter a five character password: \n";
	std::string password;
	std::string guess;
	std::cin >> password;
	std::cout << "Guess the password in three guesses or less. \n";
	while (password != guess or count > 3)
	{
		count++;
		std::cout << "Enter guess number " << count << ": \n";
		std::cin >> guess;
		if (guess != password)
		{
			attempts << guess << "\n";
		}
	}
	if (count > 3)
	{
		std::cout << "You took too many guesses.\n";
	}
	else
	{
		std::cout << "You guessed the password in " << count << " guesses.\n";
	}
	return 0;
}