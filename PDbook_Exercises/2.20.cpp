/*
(Diameter, Circumference and Area of a Circle) Write a program that reads in the radius of
a circle as an integer and prints the circle’s diameter, circumference and area. Use the constant value
3.14159 for π. Do all calculations in output statements. [Note: In this chapter, we’ve discussed only
integer constants and variables. In Chapter 4 we discuss floating-point numbers, i.e., values that can
have decimal points.]
*/

#include <iostream>
#define PI 3.14159

int main()
{
    int radius;

    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    std::cout << "Diameter of the circle is: " << 2 * radius << "\n";
    std::cout << "Circumference of the circle is: " << 2 * radius * PI << "\n";
    std::cout << "Area of the circle is: " << PI * radius * radius << "\n";
}