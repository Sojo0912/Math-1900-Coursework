#include <iostream>
#include <iomanip>
const int ROWS = 3;
const int COLS = 4;
int total = 0;
int grid[ROWS][COLS] = { { 1, 2, 3, 4 },
					 { 2, 4, 6, 8 },
					 { 3, 6, 9, 12 } };
int main()
{
	for (int a = 0; a < ROWS; a++)
	{
		for (int b = 0; b < COLS; b++)
		{
			std::cout << std::setw(4) << grid[a][b];
		}
		std::cout << "\n";
	}
	for (int a = 0; a < ROWS; a++)
	{
		for (int b = 0; b < COLS; b++)
		{
			total = total + grid[a][b];
		}
		std::cout << "Row " << a + 1 << " Total: " << total << "\n";
		total = 0;
	}
	for (int a = 0; a < COLS; a++)
	{
		for (int b = 0; b < ROWS; b++)
		{
			total = total + grid[b][a];
		}
		std::cout << "Column " << a + 1 << " Total: " << total << "\n";
		total = 0;
	}

	return 0;
}