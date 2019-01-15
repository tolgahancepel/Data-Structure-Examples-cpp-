/*
* @description: singly linked list
* @author Tolgahan Çepel - tolgahan.cepel@gmail.com
*/

#include "Manage.hpp"
#include "SinglyLinkedList.hpp"
#include <iostream>

int Manage::printMenu()
{
    int secim = 0;

	do
	{
		std::cout << "1. Basa Eleman Ekle" << std::endl;
		std::cout << "2. Sona Eleman Ekle" << std::endl;
		std::cout << "3. Eleman Sil" << std::endl;
		std::cout << "4. Tum Verileri Yazdir" << std::endl;
		std::cout << "5. Cikis" << std::endl;

		std::cout << "Seciminiz => ";
		std::cin >> secim;

		if (secim < 1 || secim > 5)
		{
			std::cout << "\nGecersiz secim! Tekrar deneyin." << std::endl;
		}
	} while (secim < 1 || secim > 5);
	
	return secim;
}

void Manage::insertAtFirst(SinglyLinkedList* sll)
{
	int key;
	std::cout << "Tamsayi giriniz => ";
	std::cin >> key;
	sll->insertAtFirst(key);
}

void Manage::insertAtEnd(SinglyLinkedList* sll)
{
    int key;
	std::cout << "Tamsayi giriniz => ";
	std::cin >> key;
    sll->insertAtEnd(key);
}

void Manage::removeNode(SinglyLinkedList* sll)
{
	int key;
	std::cout << "Silmek istediginiz tamsayi => ";
	std::cin >> key;
	sll->removeNode(key);
}

void Manage::printAllNodes(SinglyLinkedList* sll)
{
	sll->printAllNodes();
}