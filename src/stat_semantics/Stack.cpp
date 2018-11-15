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
    std::stack<Token> stack_to_search = this->stack;
    return find(stack_to_search, tk.instance);
}

int Stack::find(std::stack <Token> s, std::string id_instance) 
{
    int cnt = -1;

    while (!s.empty()) 
    {
        cnt++;

        if (s.top().instance == id_instance)
            return cnt;
        
        s.pop();
    }

    return -1;
}