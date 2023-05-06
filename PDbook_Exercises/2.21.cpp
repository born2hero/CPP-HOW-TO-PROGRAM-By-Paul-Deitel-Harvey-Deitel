/*
(Displaying Shapes with Asterisks) Write a program that prints a box, an oval, an arrow and
a diamond as follows:

            CCC         *               *
           C            *               *
          C         *********       *********
           C            *               *
            CCC         *               *
*/

#include <iostream>
#include <iomanip>

int main()
{
    std::cout << std::setw(10) << "CCC" << std::setw(6) << "+" << std::setw(10) << "+"
              << "\n";
    std::cout << std::setw(7) << "C" << std::setw(9) << "+" << std::setw(10) << "+"
              << "\n";
    std::cout << std::setw(6) << "C" << std::setw(13) << "+++++++" << std::setw(10) << "+++++++"
              << "\n";
    std::cout << std::setw(7) << "C" << std::setw(9) << "+" << std::setw(10) << "+"
              << "\n";
    std::cout << std::setw(10) << "CCC" << std::setw(6) << "+" << std::setw(10) << "+"
              << "\n";
}