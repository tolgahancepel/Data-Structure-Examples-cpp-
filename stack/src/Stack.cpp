#include "iostream"
#include "iomanip"
#include "Stack.hpp"

Stack::Stack()
{
    stk.top = -1;
}

void Stack::push(int key)
{
    if(stk.top == STACK_SIZE - 1)
        std::cout << "Stack dolu.";
    else
    {
        stk.top++;
        stk.data[stk.top] = key;
    }
}

int Stack::pop()
{
    if(stk.top == -1)
        std::cout << "Stack bos.";
    else
    {
        int x = stk.data[stk.top];
        stk.top--;
        return x;
        // ya da return(stk.data[stk.top--]);
    }
}

void Stack::printAll()
{
    for (int i = 0; i < stk.top + 1; i++)
    {
        std::cout << i << std::setw(8) << stk.data[i] << std::endl;
    }
    std::cout << "\n\n";
}