#include <iostream>
const int student = 2;
const int quiz = 3;
double quizzes[student][quiz];
double rowAverage(int row);
double columnAverage(int column);
int main()
{
	for (int a = 0; a < student; a++)
	{
		for (int b = 0; b < quiz; b++)
		{
			std::cout << "Enter the score for student " << a + 1 << " quiz " << b + 1 << ": ";
			std::cin >> quizzes[a][b];
		}
	}
	std::cout << "Student 1 Average: " << rowAverage(0) << "\n";
	std::cout << "Student 2 Average: " << rowAverage(1) << "\n";
	std::cout << "Quiz Average: " << columnAverage(0) << "\n";
	std::cout << "Quiz 2 Average: " << columnAverage(1) << "\n";
	std::cout << "Quiz 3 Average: " << columnAverage(2) << "\n";
	return 0;
}
double rowAverage(int row)
{
	double total = 0;
	for (int b = 0; b < quiz; b++)
	{
		total += quizzes[row][b];
	}
	return total / quiz;
}
double columnAverage(int column)
{
	double total = 0;
	for (int a = 0; a < student; a++)
	{
		total += quizzes[a][column];
	}
	return total / student;
}