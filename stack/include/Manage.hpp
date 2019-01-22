/*
* @description: singly linked list
* @author Tolgahan Çepel - tolgahan.cepel@gmail.com
*/

#include "Stack.hpp"
#ifndef MANAGE_HPP
#define MANAGE_HPP

class Manage
{
public:
    int printMenu();
    void push(Stack* stack);
    void pop(Stack* stack);
    void printAll(Stack* stack);
};

#endif