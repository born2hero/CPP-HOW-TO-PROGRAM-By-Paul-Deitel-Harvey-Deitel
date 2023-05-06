/*
(Arithmetic) Write a program that asks the user to enter two numbers, obtains the two
numbers from the user and prints the sum, product, difference, and quotient of the two numbers.
*/

#include <iostream>
#include <iomanip>

int main()
{
    std::cout << std::setprecision(2);
    float number1, number2;
    std::cout << "Enter the first number: ";
    std::cin >> number1;
    std::cout << "Enter the second number: ";
    std::cin >> number2;

    std::cout << "Sum of two numbers: " << number1 + number2 << "\n";
    std::cout << "Difference of " << number1 << " to " << number2 << ": " << number1 - number2 << "\n";
    std::cout << "Difference of " << number2 << " to " << number1 << ": " << number2 - number1 << "\n";
    std::cout << "Product of two numbers: " << number1 * number2 << "\n";
    std::cout << "Division of " << number1 << " by " << number2 << " is: " << float(number1 / number2) << "\n";
    std::cout << "Division of " << number2 << " by " << number1 << " is: " << float(number2 / number1) << "\n";
}