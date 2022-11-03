#include <iostream>

int fibonacci(int number);

int main() {
    int number = 0;
    
    std::cout << "Enter a number." << std::endl << "> ";
    std::cin >> number;
    
    std::cout << number << std::endl;
    int result = fibonacci(number);
    std::cout << result << std::endl;
    
    return 0;
}

int fibonacci(int number)
{
    int num1 = 0;
    int num2 = 1;

    for (int i = 0; i < number; i++) {
        num1 = num1 + num2;
        num2 = num1 - num2;
    }
    
    return num1;
}