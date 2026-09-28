#include <string>
#include <iostream>
int main()
{
	std::cout << "Welcome, you will now be asked o create a user name. It will include your fist initial, last name, and favorite number. These will be collected as individual pieces of information." << "\n";
	char f_initial;
	std::string one_name;
	int fav_number;
	std::cout << "\nPlease enter your first initial: ";
	std::cin >> f_initial;
	std::cout << "\nPlease enter your last name: ";
	std::cin >> one_name;
	std::cout << "\nPlease enter your favorite number: ";
	std::cin >> fav_number;
	std::cout << "\nUsername: " << f_initial << one_name << std::to_string(fav_number) << std::endl;
	return 0;
}