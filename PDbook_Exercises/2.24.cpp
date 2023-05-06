/*
(Odd or Even) Write a program that reads two integers and determines and prints whether each integer,as well as the sum
of two integers is an odd number. [Hint: Use the remainder operator(%). An even number is a multiple of two.
Any multiple of two leaves a remainder of zero when divided by 2.]
*/

#include <iostream>

int main()
{
    int num1, num2, sum{0};
    std::cout << "Enter the two numbers: ";
    std::cin >> num1 >> num2;

    if (num1 % 2 == 1)
    {
        std::cout << num1 << " is odd number.\n";
    }
    else
    {
        std::cout << "Not odd number";
    }
    if (num2 % 2 == 1)
    {
        std::cout << num2 << " is odd number.\n";
    }
    else
    {
        std::cout << "Not odd number";
    }

    sum = num1 + num2;

    if (sum % 2 == 1)
    {
        std::cout << sum << " is odd too.\n";
    }
    else
    {
        std::cout << "Not odd number";
    }
}