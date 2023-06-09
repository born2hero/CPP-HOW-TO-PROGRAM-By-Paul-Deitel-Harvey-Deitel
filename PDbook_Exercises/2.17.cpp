/*
(Printing) Write a program that prints the numbers 1 to 4 on the same line with each pair
of adjacent numbers separated by one space. Do this several ways:
    a) Using one statement with one stream insertion operator.
    b) Using one statement with four stream insertion operators.
    c) Using four statements.
*/

#include <iostream>

int main()
{
    // Part A
    std::cout << "1 2 3 4\n";

    // Part B
    std::cout << "1 "
              << "2 "
              << "3 "
              << "4\n";

    // Part C
    std::cout << "1 ";
    std::cout << "2 ";
    std::cout << "3 ";
    std::cout << "4" << endl;

    return 0;
}