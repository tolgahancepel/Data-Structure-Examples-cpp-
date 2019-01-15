/*
* @description: singly linked list
* @author Tolgahan Çepel - tolgahan.cepel@gmail.com
*/

#ifndef MANAGE_HPP
#define MANAGE_HPP

#include "SinglyLinkedList.hpp"

class Manage
{
public:
    int printMenu();
    void insertAtFirst(SinglyLinkedList* sll);
    void insertAtEnd(SinglyLinkedList* sll);
    void removeNode (SinglyLinkedList* sll);
    void printAllNodes(SinglyLinkedList* sll);

};

#endif