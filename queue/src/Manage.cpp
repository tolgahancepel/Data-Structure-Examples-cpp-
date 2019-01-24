/*
* @description: queue
* @author Tolgahan Çepel - tolgahan.cepel@gmail.com
*/

#include "Manage.hpp"
#include <iostream>

int Manage::printMenu()
{
    int secim = 0;

	do
	{
		std::cout << "1. Eleman Ekle" << std::endl;
		std::cout << "2. Eleman Sil" << std::endl;
		std::cout << "3. Siradaki Elemani Getir" << std::endl;
		std::cout << "4. Cikis" << std::endl;

		std::cout << "Seciminiz => ";
		std::cin >> secim;

		if (secim < 1 || secim > 5)
		{
			std::cout << "\nGecersiz secim! Tekrar deneyin." << std::endl;
		}
	} while (secim < 1 || secim > 5);
	
	return secim;
}

void Manage::enqueue(Queue* que)
{
	int key;
	std::cout << "Tamsayi giriniz => ";
	std::cin >> key;
	que->enqueue(key);
}

void Manage::dequeue(Queue* que)
{
	que->dequeue();
}

void Manage::peek(Queue* que)
{
	std::cout << "Siradaki eleman: " << que->peek() << "\n";
}

void Manage::printAll(Queue* que)
{
	que->printAllNodes();
}