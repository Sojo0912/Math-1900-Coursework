#include <iostream>
int main() 
{
double mresistance;
double rresistance;
std::cout << "Please enter the measured resistance: ";
std::cin >> mresistance;
std::cout << "Please enter the rated resistance: ";
std::cin >> rresistance;
bool inrange = (mresistance >= 0.95 * rresistance && mresistance <= 1.05 * rresistance);
if (inrange)
{ 
	std::cout << "The measured resistance is within 5% of the rated resistance";
}
else
{
	std::cout << "The measured resistance is not within 5% of the rated resistance";
}
return 0;
}