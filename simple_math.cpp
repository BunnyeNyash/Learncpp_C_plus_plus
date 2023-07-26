/* A program that asks the user to enter a number, and then enter a second number. 
 * The program then tells the user what the result of adding and subtracting the two numbers is.
 */

#include <iostream> // for std::cout and std::cin

int main()
{
	// Ask for the first number and store it
	std::cout << "Enter an integer: ";

	int num1{};
	std::cin >> num1;

	// Ask for the second number and store it
	std::cout << "Enter another number: ";

	int num2{};
	std::cin >> num2;

	// Output the result of the addition
	std::cout << num1 << " + " << num2 << " is " << num1 + num2 << ".\n";

	// Output the result of the substraction
	std::cout << num1 << " - " << num2 << " is " << num1 - num2 << ".\n";

	return 0;
}
