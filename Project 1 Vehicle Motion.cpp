//Sawyer Hammonds, Project One: Vehicle Motion

#include <iostream>
#include <string>
#include <vector>

int main()
{
	int checkpoint_count = 0;
	int count_one = 0;
	int count_two = 0;
	int count_three = 0;
	double total_distance = 0;
	double total_time = 0;
	std::string checkpoint;
	while (checkpoint_count < 2)
	{
		std::cout << "Enter the number of checkpoints you would like to record: \n";
		std::cin >> checkpoint_count;
		if (checkpoint_count < 2) // This check is what actually tells the user to enter at least 2 checkpoints; the while loop is used to ask for the input again if they ask for less than two checkpoints.
		{
			std::cout << "You must enter at least 2 checkpoints.\n";
		}
	}
	std::vector<double> distance(checkpoint_count); //Using the new keyword, I can dynamically allocate memory so that the distances and times may be stored in a dynamic variable as the user inputs them. 
	std::vector<double> time(checkpoint_count);;
	while (count_one < checkpoint_count)
	{
		std::cout << "Enter position (miles) and time (hours) seperated by a space for checkpoint " << count_one + 1 << ": \n";
		std::cin >> distance[count_one] >> time[count_one];//The user inputs the distance and time for each checkpoint, which is stored in the vector arrays.
		count_one++;
	}
	while (count_two < checkpoint_count)
	{
		std::cout << "Average Speed for checkpoint " << count_two + 1 << ": " << distance[count_two] / time[count_two] << "\n";
		count_two++;
	}
	while (count_three < checkpoint_count)//This loop adds the individual distances and times recursively before calcuating the average speed in the very next block of code.
	{
		total_time = total_time + time[count_three];
		total_distance = total_distance + distance[count_three];
		count_three++;
	}
	std::cout << "The average speed across the trip was: " << total_distance / total_time << "\n";
	return 0;
}