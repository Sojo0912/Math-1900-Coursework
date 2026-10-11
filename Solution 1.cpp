#include <iostream>
#include <fstream>
#include <string>
int main()
{
	std::string password;
	int count = 1;
	std::cout << "You will now be aksed to enter a 5 character password.\n";
	std::cin >> password;
	while(count <= 5)
	{ 
		std::cout << "Character " << count << ":" << password[(count-1)] << "\n";
		count++;
	}
	return 0;
}