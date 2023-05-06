/*
(Arithmetic, Smallest and Largest) Write a program that inputs three integers from the keyboard and prints the sum,
average, product, smallest and largest of these numbers. The screen dialog
should appear as follows:
    Input three different integers: 13 27 14
    Sum is 54
    Average is 18
    Product is 4914
    Smallest is 13
    Largest is 27
*/

#include <iostream>
#include <iomanip>

int main()
{
    int num1, num2, num3, sum{0}, product{0};
    std::cout << "Enter three different intgers: ";
    std::cin >> num1 >> num2 >> num3;
    std::cout << "Input three different integers: " << num1 << "\t" << num2 << "\t" << num3 << "\n";
    sum = num1 + num2 + num3;
    product = num1 * num2 * num3;
    std::cout << "Sum is " << sum << "\n";
    std::cout << "Average is " << sum / 3 << "\n";
    std::cout << "Product is " << product << "\n";
    std::cout << "Largest is " << (num1 >= num2 ? (num1 >= num3 ? num1 : num3) : (num2 >= num3 ? num2 : num3)) << "\n";
    std::cout << "Smallest is " << (num1 <= num2 ? (num1 <= num3 ? num1 : num3) : (num2 <= num3 ? num2 : num3)) << "\n";
}