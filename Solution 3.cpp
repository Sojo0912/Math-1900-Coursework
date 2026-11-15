#include <iostream>
const int x_axis = 10;
const int y_axis = 10;
int x;
int y;
char grid[y_axis][x_axis] = 
	{ 
	{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
	{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
	{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
	{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
	{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
	{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
	{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
	{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
	{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
	{'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'} 
	};
int main()
{
	for (int a = 0; a < y_axis; a++)
	{
		for (int b = 0; b < x_axis; b++)
		{
			std::cout << grid[a][b] << " ";
		}
		std::cout << "\n";
	}
	std::cout << "Enter an x and y coordinate ranging from 0 to 9 seperated by a space: ";
	std::cin >> x >> y;
	grid[y][x] = '*';
	for (int a = 0; a < y_axis; a++)
	{
		for (int b = 0; b < x_axis; b++)
		{
			std::cout << grid[a][b] << " ";
		}
		std::cout << "\n";
	}
}