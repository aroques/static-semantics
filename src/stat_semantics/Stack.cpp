#include "stat_semantics/include/Stack.hpp"

Stack::Stack() {};

void Stack::push(Token tk)
{
    this->stack.push(tk);
}

void Stack::pop()
{
    this->stack.pop();
}

int Stack::find(Token tk)
{
    return 0;
}