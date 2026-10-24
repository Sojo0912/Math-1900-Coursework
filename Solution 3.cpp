#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include<fstream>
int main()
{
	std::ofstream practice("practice.txt");
	int round = 1;
	char cont = 'y';
	srand(time(0));
	while (cont == 'y' || cont == 'Y')
	{
		int c = 0;
		if (round > 1) // Once the user completes the first round, a new line character is added to keep formatting consistent within the text file.
		{
			practice << "\n";
		}
		practice << "Round " << round << "\n\n"; //Two new lines are used to ensure that a new line is kept between each line of text. This formatting is used in the text file as well as the console output.
		for (int i = 1; i <= 5; i++)
		{
			int a = rand() % 12 + 1;
			int b = rand() % 12 + 1;
			std::cout << "\n" << "What is the product of " << a << "*" << b << ": ";
			double answer;
			std::cin >> answer;
			if (answer == a * b)
			{
				c++;
				std::cout << "\nCorrect! " << c << " out of 5 correct, " << 5 - i << " questions remaining." << "\n";
			}
			else
			{
				std::cout << "\nSorry :( Try Again. " << c << " out of 5 correct, " << 5 - i << " questions remaining." << "\n";
				practice << a << " * " << b << " = ?" << "\n";
			}
		}
		std::cout << "\nYou got " << c << " out of 5 correct." << "\n"; 
		std::cout << "\nTry again? Y or y for yes. N or n for no. ";
		std::cin >> cont;
		if (c == 5) //c counts the number of correct answers. c == 5 is 100% accuracy. This check prints a message in the text file if the user is 100% accuarte for one round.
		{
			practice << "You got all of the questions right." << "\n";
		}
		round++; 
	}
	practice.close();
	return 0;
}