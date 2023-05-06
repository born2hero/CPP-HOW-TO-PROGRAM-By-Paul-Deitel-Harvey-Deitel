/*
(Random Numbers) Write statements that assign random integers to the variable n in the
following ranges:
    a) 1 ≤n ≤2
    b) 1 ≤n ≤100
    c) 0 ≤n ≤9
    d) 1000 ≤n ≤1112
    e) –1 ≤n ≤1
    f) –3 ≤n ≤11
*/

#include <iostream>
#include <random>
#include <iomanip>
#include <ctime>

int firstRandom(int s)
{
    for (unsigned int i{1}; i <= 20; i++)
    {
        std::cout << std::setw(10) << (1 + rand() % 2);

        if (i % 5 == 0)
        {
            std::cout << std::endl;
        }
    }
    std::cout << "\n\n";
}

int secondRandom(int s)
{
    for (unsigned int i{1}; i <= 20; i++)
    {
        std::cout << std::setw(10) << (1 + rand() % 100);

        if (i % 5 == 0)
        {
            std::cout << std::endl;
        }
    }
    std::cout << "\n\n";
}

int thirdRandom(int s)
{
    for (unsigned int i{1}; i <= 20; i++)
    {
        std::cout << std::setw(10) << (0 + rand() % 10);

        if (i % 5 == 0)
        {
            std::cout << std::endl;
        }
    }
    std::cout << "\n\n";
}

int fourthRandom(int s)
{
    for (unsigned int i{1}; i <= 20; i++)
    {
        std::cout << std::setw(10) << (500 + rand() % 179);

        if (i % 5 == 0)
        {
            std::cout << std::endl;
        }
    }
    std::cout << "\n\n";
}

int fifthRandom(int s)
{
    for (unsigned int i{1}; i <= 20; i++)
    {
        std::cout << std::setw(10) << (-3 + rand() % 16);

        if (i % 5 == 0)
        {
            std::cout << std::endl;
        }
    }
    std::cout << "\n\n";
}

int main()
{
    unsigned int seed{0};
    std::cout << "Enter seed: ";
    std::cin >> seed;
    srand(seed);

    // for (unsigned int i{1}; i <= 10; i++)
    // {
    //     std::cout << std::setw(10) << (1 + rand() % 2);

    //     if (i % 5 == 0)
    //     {
    //         std::cout << std::endl;
    //     }
    // }
    firstRandom(seed);
    secondRandom(seed);
    thirdRandom(seed);
    fourthRandom(seed);
    fifthRandom(seed);
}
