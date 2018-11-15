#ifndef STACK_HPP
#define STACK_HPP

#include "scanner/include/token.hpp"
#include <stack>

class Stack
{
private:
    std::stack<Token> stack;
    int find(std::stack <Token> s, std::string id_instance);

public:
    Stack();

    void push(Token tk);
    void pop();
    int find(Token tk);
};

#endif // !STACK_HPP