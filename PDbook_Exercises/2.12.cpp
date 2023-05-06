/*
What, if anything, prints when each of the following C++ statements is performed? If nothing prints, then answer “nothing.” Assume x = 2 and y = 3.
    a) cout << x;
    b) cout << x + x;
    c) cout << "x=";
    d) cout << "x = " << x;
    e) cout << x + y << " = " << y + x;
    f) z = x + y;
    g) cin >> x >> y;
    h) // cout << "x + y = " << x + y;
    i) cout << "\n";
*/

#include <iostream>
int main()
{
    int x = 2, y = 3;
    std::cout << x;
    std::cout << x + x;
    std::cout << "x=";
    std::cout << "x = " << x;
    std::cout << x + y << " = " << y + x;
    // z = x + y;
    std::cin >> x >> y;
    std::cout << x << "\\" << y;
    // std::cout << "x + y = " << x + y;
    std::cout << "\n";
}