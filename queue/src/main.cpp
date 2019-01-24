/*
* @description: queue
* @author Tolgahan Çepel - tolgahan.cepel@gmail.com
*/

#include "Queue.hpp"
#include "Manage.hpp"
#include <iostream>
#include <iomanip>

int main()
{
    Manage m1;
    Queue* q1 = new Queue();

    int secim = 0;
    do
    {
        secim = m1.printMenu();

        switch(secim)
        {
            case 1:
                m1.enqueue(q1);
                system("cls");
                m1.printAll(q1);
                break;
            case 2:
                m1.dequeue(q1);
                system("cls");
                m1.printAll(q1);
                break;
            case 3:
                m1.peek(q1);
                break;
            case 4:
                return EXIT_SUCCESS;
                break;
            default:
                std::cout << "Yanlis secim!\n";
                break;
        }
        
    } while(secim != 9);

	return EXIT_SUCCESS;
}