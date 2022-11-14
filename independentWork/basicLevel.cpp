#include <iostream>

//A function that calculates the area of a rectangle.
int areaRectangle(double a, double b) {
    return a > 0 && b > 0 ? a * b : 0;
}

//A function that calculates the perimeter of a rectangle.
int perimeterRectangle(double a, double b) {
    return a > 0 && b > 0 ? 2 * (a + b) : 0;
}

//Function that checks if a point lies in a rectangle.
std::string isPointInRectangle(double a, double b, double pointX, double pointY) {
    //The center of the rectangle is 0!

    double sideLengthOfRectangleFromOriginX = a / 2;
    double sideLengthOfRectangleFromOriginY = b / 2;

    if (-sideLengthOfRectangleFromOriginX <= pointX && pointX <= sideLengthOfRectangleFromOriginX
        && -sideLengthOfRectangleFromOriginY <= pointY && pointY <= sideLengthOfRectangleFromOriginY) {
        return "The point is in the rectangle.";
    } else {
        return "The point is not in the rectangle.";
    }
}

//A function that counts the sum of the digits in a five-digit number.
int sumDigitsFiveDigitNumber(int number) {
    int sum = 0;

    //Checking a number for length.
    if (std::to_string(number).length() > 5 || std::to_string(number).length() < 5) {
        std::cout << "Not five digits." << std::endl;
        return 0;
    }

    for (int i = 5; i > 0; i--) {
        sum += number % 10, number /= 10;
    }

    return sum;
}

//A function that counts the product of the digits of a five-digit number.
int productDigitsFiveDigitNumber(int number) {
    int product = 1;

    //Checking a number for length.
    if (std::to_string(number).length() > 5 || std::to_string(number).length() < 5) {
        std::cout << "Not five digits." << std::endl;
        return 0;
    }

    for (int i = 5; i > 0; i--) {
        product *= number % 10, number /= 10;
    }

    return product;
}

int main() {
    double a = 0;
    double b = 0;

    double x = 0;
    double y = 0;

    int number = 0;

    std::cout << "Enter the lengths of the sides of the rectangle." << std::endl << "> ";
    std::cin >> a;
    std::cout << "> ";
    std::cin >> b;

    std::cout << "Rectangle area: " << areaRectangle(a, b) << std::endl;
    std::cout << "Perimeter of a rectangle: " << perimeterRectangle(a, b) << std::endl;

    std::cout << "Enter point coordinates." << std::endl << "> ";
    std::cin >> x;
    std::cin >> y;

    std::cout << isPointInRectangle(a, b, x, y) << std::endl;

    std::cout << "Enter a five-digit number." << std::endl << "> ";
    std::cin >> number;

    std::cout << "The sum of the digits of a five-digit number is: " << sumDigitsFiveDigitNumber(number) << std::endl;
    std::cout << "The product of the numbers of a five-digit number is: " << productDigitsFiveDigitNumber(number)
              << std::endl;

    return 0;
}