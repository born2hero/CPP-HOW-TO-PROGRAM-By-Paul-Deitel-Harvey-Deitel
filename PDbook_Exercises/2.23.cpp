/*
(Largest and Smallest Integers) Write a program that reads in five integers and determines
and prints the largest and the smallest integers in the group. Use only the programming techniques
you learned in this chapter.
*/

#include <iostream>

int main()
{
    int num1, num2, num3, num4, num5, smallest, largest;
    std::cout << "Enter the five integers: ";
    std::cin >> num1 >> num2 >> num3 >> num4 >> num5;

    largest = num1;
    if (num2 > largest)
    {
        largest = num2;
    }
    if (num3 > largest)
    {
        largest = num3;
    }
    if (num4 > largest)
    {
        largest = num4;
    }
    if (num5 > largest)
    {
        largest = num5;
    }

    std::cout << "Largest: " << largest << "\n";

    smallest = num1;
    if (num2 < smallest)
    {
        smallest = num2;
    }
    if (num3 < smallest)
    {
        smallest = num3;
    }
    if (num4 < smallest)
    {
        smallest = num4;
    }
    if (num5 < smallest)
    {
        smallest = num5;
    }
    std::cout << "Smallest: " << smallest << "\n";
}