/*
(Rounding Numbers) An application of function floor is rounding a value to the nearest
integer. The statement

y = floor( x + 0.5 );

rounds the number x to the nearest integer and assigns the result to y. Write a program that reads
several numbers and uses the preceding statement to round each of these numbers to the nearest
integer. For each number processed, print both the original number and the rounded number
*/

#include <iostream>
#include <cmath>

float roundingOff(unsigned int num)
{
    float res;
    for (int i{1}; i < num; i++)
    {
        res = floor(i + 0.5);
        std::cout << res << "\n";
    }
}

int main()
{
    float value;
    unsigned int num;
    std::cin >> num;

    std::cout << floor(45.2 + 5.5);
    std::cout << roundingOff(num);
}