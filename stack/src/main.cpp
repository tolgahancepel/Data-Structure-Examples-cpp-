/*
* @description: singly linked list
* @author Tolgahan Çepel - tolgahan.cepel@gmail.com
*/

#include "Stack.hpp"
#include "Manage.hpp"
#include <iostream>
#include <iomanip>

int main()
{
    Manage m1;
    Stack* stk = new Stack();

    int secim = 0;
    do
    {
        secim = m1.printMenu();

        switch(secim)
        {
            case 1:
                m1.push(stk);
                break;
            case 2:
                m1.pop(stk);
                break;
            case 3:
                return EXIT_SUCCESS;
                break;
            default:
                std::cout << "Yanlis secim!\n";
                break;
        }
        system("cls");
        m1.printAll(stk); 
    } while(secim != 9);

	return EXIT_SUCCESS;
}