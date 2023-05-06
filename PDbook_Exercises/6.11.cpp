/*
Show the value of x after each of the following statements is performed:
a) x = fabs( 7.5 )
b) x = floor( 7.5 )
c) x = fabs( 0.0 )
d) x = ceil( 0.0 )
e) x = fabs( -6.4 )
f) x = ceil( -6.4 )
g) x = ceil( -fabs( -8 + floor( -5.5 ) ) )
*/

#include <iostream>
#include <cmath>

int main()
{
    // x = fabs(7.5);
    // int x=floor(7.5);
    // int x=fabs(7.5);

    std::cout << fabs(7.5) << std::endl;
    std::cout << floor(7.5) << std::endl;
    std::cout << fabs(0.0) << std::endl;
    std::cout << ceil(0.0) << std::endl;
    std::cout << fabs(-6.4) << std::endl;
    std::cout << ceil(6.4) << std::endl;
    std::cout << ceil(-fabs(-8 + floor(-5.5))) << std::endl;
    std::cout << floor(-5.5) << std::endl;
}