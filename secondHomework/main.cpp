#include <iostream>

int main()
{
	int choice;
	int num1;
	int num2;
	do
	{
		std::string menu = "1) Addition\n2) Subtraction\n3) Multiplication\n4) Division\n5) Quit";

		std::cout << std::endl
				  << menu << std::endl;
		std::cout << "Select an item. [1-5]" << std::endl
				  << "> ";
		std::cin >> choice;

		std::cout << "Enter the first number." << std::endl << "> ";
		std::cin >> num1;

		std::cout << "Enter the second number." << std::endl << "> ";
		std::cin >> num2;
		
		switch (choice)
		{
		case (1):
			std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
			break;
		case (2):
			std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
			break;
		case (3):
			std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
			break;
		case (4):
			if (num2 != 0)
			{
				std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
			}
			else if (num2 == 0)
			{
				std::cout << "It cannot be divided by 0." << std::endl;
			}
			break;
		}
	
	} while (choice != 5);

	std::cout << "The calculator has completed its work." << std::endl;
}