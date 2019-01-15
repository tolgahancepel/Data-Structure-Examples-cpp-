/*
* @description: singly linked list
* @author Tolgahan Çepel - tolgahan.cepel@gmail.com
*/

#include "SinglyLinkedList.hpp"
#include "Manage.hpp"
#include <iostream>
#include <iomanip>

int main()
{
    Manage m1;
    SinglyLinkedList* sll = new SinglyLinkedList();

    int secim = 0;
    do
    {
        secim = m1.printMenu();

        switch(secim)
        {
            case 1:
                m1.insertAtFirst(sll);
                system("cls");
                std::cout << "Yeni eleman basariyla eklendi.\n";
                break;
            case 2:
                m1.insertAtEnd(sll);
                system("cls");
                std::cout << "Yeni eleman basariyla eklendi.\n";
                break;
            case 3:
                m1.removeNode(sll);
                //system("cls");
                std::cout << "Eleman basariyla silindi.\n";
                break;
            case 4:
                system("cls");
                m1.printAllNodes(sll);
                std::cout << "\n";
                break;
            case 5:
                return EXIT_SUCCESS;
            default:
                std::cout << "Yanlis secim!\n";
                break;
        }  
    } while(secim != 9);

	return EXIT_SUCCESS;
}