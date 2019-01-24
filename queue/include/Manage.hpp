/*
* @description: queue
* @author Tolgahan Çepel - tolgahan.cepel@gmail.com
*/

#ifndef MANAGE_HPP
#define MANAGE_HPP
#include "Queue.hpp"

class Manage
{
public:
    int printMenu();
    void enqueue(Queue* que);
    void dequeue(Queue* que);
    void peek(Queue* que);
    void printAll(Queue* que);
};

#endif