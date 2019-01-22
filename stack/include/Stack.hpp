#ifndef STACK_HPP
#define STACK_HPP

#define STACK_SIZE 8

typedef struct
{
    int data[STACK_SIZE];
    int top;
}stack;

class Stack
{
    public:
        Stack();
        void push(int key);
        int pop();
        void printAll();
    private:
        stack stk;
};

#endif