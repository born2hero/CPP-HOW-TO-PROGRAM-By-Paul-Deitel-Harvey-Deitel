#ifndef STACK_H
#define STACK_H

#include <deque>

template <typename T>
class Stack
{
private:
    std::deque<T> stack;

public:
    // return the top element of satck
    T &top()
    {
        return stack.front();
    }

    // push an element onto the stack
    void push(const T &pushValue)
    {
        stack.push_front(pushValue);
    }

    // pop an element from the stack
    void pop(const T &popValue)
    {
        stack.pop_front();
    }

    // determine the stack is empty
    bool isEmpty() const
    {
        return stack.empty();
    }

    // return size of the stack
    size_t size() const
    {
        return stack.size();
    }
};

#endif