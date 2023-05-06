/*
(Comparing Integers) Write a program that asks the user to enter two integers, obtains the
numbers from the user, then prints the larger number followed by the words "is larger." If the
numbers are equal, print the message "These numbers are equal."
*/

#include <iostream>

int main()
{
    int firstNum, secondNum;
    std::cout << "Enter the first number: ";
    std::cin >> firstNum;
    std::cout << "Enter the second number: ";
    std::cin >> secondNum;

    if (firstNum > secondNum)
    {
        std::cout << firstNum << " is larger."
                  << "\n";
    }
    else if (firstNum < secondNum)
    {
        std::cout << secondNum << " is larger."
                  << "\n";
    }
    else
    {
        std::cout << "These numbers are equal."
                  << "\n";
    }
}