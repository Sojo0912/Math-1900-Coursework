#include <string>
#include <iostream>
int main()
{
	std::string question_1;
	std::string answer_1;
	std::cout << "Enter your Question: ";
	std::getline(std::cin,question_1);;
	std::cout << "\nEnter your Answer: ";
	std::getline(std::cin, answer_1);
	std::cout << "\nYour Question: " << question_1 << "\n";
	std::cout << "\nPress Enter to Reveal your Answer: ";
	std::cin.get();
	std::cout << "\nYour Answer: " << answer_1;
	return 0;
}