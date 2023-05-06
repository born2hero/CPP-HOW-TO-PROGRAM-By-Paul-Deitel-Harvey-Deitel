/*
(Hypotenuse Calculations) Define a function hypotenuse that calculates the hypotenuse of
a right triangle when the other two sides are given. The function should take two double arguments
and return the hypotenuse as a double. Use this function in a program to determine the hypotenuse
for each of the triangles shown below.

Triangle        Side 1          Side 2
    1           3.0             4.0
    2           5.0             12.0
    3           8.0             15.0
*/

#include <iostream>
#include <iomanip>
#include <cmath>

double hypotenuseWithMathLib(double s1, double s2)
{
    double hp{0};
    hp = sqrt(pow(s1, 2) + pow(s2, 2));

    // if (hp > s1 + s2)
    // {
    return hp;
    //     }
    //     else
    //     {
    //         std::cout << "Not a triangle";
    //     }
}

double hypotenuseWithoutMathLib(double s1, double s2)
{
    double hp{0};
    // hp = ((s1 * s1) + (s2 * s2)) ^ 0.5;
    return hp;
}

int main()
{
    double side1, side2;
    std::cout << std::setprecision(2);

    std::cin >> side1 >> side2;
    std::cout << hypotenuseWithMathLib(side1, side2) << "\n"
              << hypotenuseWithoutMathLib(side1, side2);
}