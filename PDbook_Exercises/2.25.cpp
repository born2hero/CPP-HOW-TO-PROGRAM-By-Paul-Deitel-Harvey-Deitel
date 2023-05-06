/*
(Multiples) Write a program that reads in two integers and determines and prints if the first
is a multiple of the second. [Hint: Use the remainder operator.]
*/

#include <iostream>

int main()
{
    int num1{0}, num2{0};
    std::cout << "Enter the two number: ";
    std::cin >> num1 >> num2;

    if (num1 % num2 == 0)
    {
        std::cout << num1 << " is multiple of " << num2;
    }
    else
    {
        std::cout << "No!";
    }
}
