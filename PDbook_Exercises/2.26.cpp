/*
(Checkerboard Pattern) Display the following checkerboard pattern with eight output
statements, then display the same pattern using as few statements as possible.

* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
*/

#include <iostream>
#include <iomanip>

int main()
{
    std::cout << "* * * * * * * *\n";
    std::cout << std::setw(17) << "* * * * * * * *\n";
    std::cout << "* * * * * * * *\n";
    std::cout << std::setw(17) << "* * * * * * * *\n";
    std::cout << "* * * * * * * *\n";
    std::cout << std::setw(17) << "* * * * * * * *\n";
    std::cout << "* * * * * * * *\n";
    std::cout << std::setw(17) << "* * * * * * * *\n";
}