/*
* @description: singly linked list
* @author Tolgahan Çepel - tolgahan.cepel@gmail.com
*/

#ifndef SINGLYLINKEDLIST_HPP
#define SINGLYLINKEDLIST_HPP

struct node
{
    int data;
    node *next;
	node();
};

class SinglyLinkedList
{
private:
    struct node* head;
    struct node* tail;
public:
    SinglyLinkedList();
    void insertAtFirst(int key);
    void insertAtEnd(int key);
    void removeNode(int key);
    void printAllNodes();
};

#endif