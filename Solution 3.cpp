#include <iostream>
int main()
{
	double grade;
	std::cout << "Please enter the grade (0 to 100): \n";
	std::cin >> grade;
	if (grade < 60 && grade >= 0)
	{
		std::cout << "The grade is F";
	}
	else if (grade < 70 && grade >= 60)
	{
		std::cout << "The grade is D";
	}
	else if (grade < 80 && grade >= 70)
	{
		std::cout << "The grade is C";
	}
	else if (grade < 90 && grade >=80)
	{
		std::cout << "The grade is B";
	}
	else if (grade <= 100 && grade >= 90)
	{
		std::cout << "The grade is A";
	}
	else
	{
		if (grade < 0)
		{
			std::cout << "A negative grade should be impossible; although you tend to surprise me.";
		}
		else
		{
			std::cout << "I never awarded bonus points cheater.";
		}
	}
	return 0;
}