/*
(Exponentiation) Write a function integerPower(base, exponent) that returns the value of
base exponent
For example, integerPower(3, 4) = 3 * 3 * 3 * 3. Assume that exponent is a positive, nonzero
integer and that base is an integer. Do not use any math library functions.
*/

#include <iostream>

unsigned int integerPower(unsigned int b, unsigned int e)
{
    unsigned int res{1};
    if (0 == b && 0 == e)
    {
        std::cerr << "Error";
    }
    else if (0 == e)
    {
        res = 1;
    }
    for (int i{0}; i < e; i++)
    {
        res = res * b;
    }
    return res;
}

int main()
{
    unsigned int base, exponent;
    std::cout << "Input base: ";
    std::cin >> base;
    std::cout << "Input exponent: ";
    std::cin >> exponent;

    std::cout << "Base to the power exponent is: " << integerPower(base, exponent);
}