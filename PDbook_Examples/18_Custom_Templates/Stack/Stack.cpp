#include <iostream>
#include "Stack.h"

int main()
{
    Stack<double> doubleStack;        // create a Stack of double values
    const size_t doubleStackSize = 5; // satck size
    double doubleValue = 1.1;         // value to push first

    std::cout << "Pushing element to doubleStack" << std::endl;

    // push 5 doubles onto doubleStack
    for (size_t i = 0; i < doubleStackSize; i++)
    {
        doubleStack.push(doubleValue);
        std::cout << doubleStack << " ";
        doubleValue += 1.1;
    }
}