/*
* @description: singly linked list
* @author Tolgahan Çepel - tolgahan.cepel@gmail.com
*/

#include "Manage.hpp"
#include "Stack.hpp"
#include <iostream>

int Manage::printMenu()
{
    int secim = 0;

	do
	{
		std::cout << "1. Eleman Ekle" << std::endl;
		std::cout << "2. Eleman Sil" << std::endl;
		std::cout << "3. Cikis" << std::endl;

		std::cout << "Seciminiz => ";
		std::cin >> secim;

		if (secim < 1 || secim > 5)
		{
			std::cout << "\nGecersiz secim! Tekrar deneyin." << std::endl;
		}
	} while (secim < 1 || secim > 5);
	
	return secim;
}

void Manage::push(Stack* stack)
{
	int key;
	std::cout << "Tamsayi giriniz => ";
	std::cin >> key;
	stack->push(key);
}

void Manage::pop(Stack* stack)
{
	stack->pop();
}

void Manage::printAll(Stack* stack)
{
	stack->printAll();
}