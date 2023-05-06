/*
(Rounding Numbers) Function floor can be used to round a number to a specific decimal
place. The statement

y = floor( x * 10 + 0.5 ) / 10;

rounds x to the tenths position (the first position to the right of the decimal point). The statement

y = floor( x * 100 + 0.5 ) / 100;

rounds x to the hundredths position (the second position to the right of the decimal point). Write
a program that defines four functions to round a number x in various ways:

a) roundToInteger( number )
b) roundToTenths( number )
c) roundToHundredths( number )
d) roundToThousandths( number )

For each value read, your program should print the original value, the number rounded to the
nearest integer, the number rounded to the nearest tenth, the number rounded to the nearest
hundredth and the number rounded to the nearest thousandth.
*/

#include <iostream>
#include <cmath>

float roundToInteger(float num)
{
    return floor(num + 0.5);
}
float roundToTenths(float num)
{
    return floor(num * 10 + 0.5) / 10;
}
float roundToHundredths(float num)
{
    return floor(num * 100 + 0.5) / 100;
}
float roundToThousandths(float num)
{
    return floor(num * 1000 + 0.5) / 1000;
}

int main()
{
    float number;
    std::cin >> number;

    std::cout << roundToInteger(number);
    std::cout << roundToTenths(number);
    std::cout << roundToHundredths(number);
    std::cout << roundToThousandths(number);
}