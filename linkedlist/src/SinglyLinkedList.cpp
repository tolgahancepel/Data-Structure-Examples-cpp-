/*
* @description: singly linked list
* @author Tolgahan Çepel - tolgahan.cepel@gmail.com
*/

#include "SinglyLinkedList.hpp"
#include <stdio.h>
#include <iostream>

SinglyLinkedList::SinglyLinkedList()
{
    head = NULL;
    tail = NULL;
}

void SinglyLinkedList::insertAtFirst(int key)
{
    if(head == NULL)
    {
        head = new struct node();
        head->data = key;
        tail = head;
    }

    else
    {
        struct node* temp = new struct node();
        temp->data = key;
        temp->next = head;
        head = temp;
    }
}


void SinglyLinkedList::insertAtEnd(int key)
{
    if(head == NULL)
    {
        head = new struct node();
        head->data = key;
        tail = head;
    }

    else
    {
        struct node* temp = new struct node();
        temp->data = key;
        tail->next = temp;
        tail = temp;
    }
}

void SinglyLinkedList::removeNode(int key)
{
    struct node* temp = head;

    if (head != NULL && temp->data == key)
    {
        struct node* new_head = temp->next;
        delete temp;
        head = new_head;
        return;
    }

    struct node* prev;
    while (temp->data != key && temp != NULL)
    {
        prev = temp;
        temp = temp->next;
    }

    if(temp == NULL) return; // eğer aranan değer yok ise
    prev->next = temp->next;
    delete temp;
}

void SinglyLinkedList::printAllNodes()
{
    struct node* temp = head;
    while (temp != NULL)
    {
        std::cout << temp->data << std::endl;
        temp = temp->next;
    }
}

node::node()
{
    next = NULL;
}