/*
* @description: queue
* @author Tolgahan Çepel - tolgahan.cepel@gmail.com
*/

#include "Queue.hpp"
#include <iostream>
#include <iomanip>
#include <stdio.h>

Queue::Queue()
{
    front = rear = NULL;
}

void Queue::enqueue(int key)
{
    if(rear == NULL)
    {
        front = rear = new struct node();
        rear->data = key;
    }
    else
    {
        struct node* temp = new struct node();
        temp->data = key;
        rear->next = temp;
        rear = temp;
    }
}

void Queue::dequeue()
{
    if(front->next == NULL)
    {
        delete front;
        front = rear = NULL;
        return;
    }
    struct node* temp = front;
    front = temp->next;
    delete temp;
}

int Queue::peek()
{
    return front->data;
}


void Queue::printAllNodes()
{
    struct node* temp = front;
    while(temp != NULL)
    {
        std::cout << temp->data << std::setw(10);
        temp = temp->next;
    }
    std::cout << "\n\n";
}

node::node()
{
    next = NULL;
}