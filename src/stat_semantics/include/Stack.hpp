#ifndef STACK_HPP
#define STACK_HPP

#include "scanner/include/token.hpp"
#include <stack>

class Stack
{
private:
    std::stack<Token> stack;

public:
    Stack();

    void push(Token tk);
    void pop();
    int find(Token tk);
};

#endif // !STACK_HPP