#include <iostream>
#include <string>
std::string check (std::string guess)
{
	std::string passkey = "Th Password is Password";
	if (guess == passkey)
	{
		return "correct";
	}
	else
	{
		return "incorrect";
	}
}
int main()
{
	std::string guess;
	std::cout << "Enter the password: ";
	getline(std::cin, guess);
	std::cout << check(guess) << "\n";
}