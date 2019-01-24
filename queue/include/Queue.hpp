/*
* @description: queue
* @author Tolgahan Çepel - tolgahan.cepel@gmail.com
*/

#ifndef QUEUE_HPP
#define QUEUE_HPP

struct node
{
    int data;
    node *next;
	node();
};

class Queue
{
private:
    struct node* front;
    struct node* rear;
public:
    Queue();
    void enqueue(int key);
    void dequeue();
    int peek();
    void printAllNodes();
};

#endif