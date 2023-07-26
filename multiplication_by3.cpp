// This program asks the user to input a number of their choice and then it multiplies that number by 2

#include <iostream> // for std::cin and std::cout

int main()
{
	// Ask user for the number
	std::cout << "Enter an integer: ";

	// Create a variable to store the user's input
	int num{};
	std::cin >> num;

	// Output the number multiplied by 2
	std::cout << "Double " << num << " is: " << num * 2 << '\n';

	// Output the number multiplied by 3
	std::cout << "Triple " << num << " is: " << num * 3 << '\n';

	return 0;
}
