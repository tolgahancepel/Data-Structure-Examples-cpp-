derlecalistir: program calistir

program: SinglyLinkedList.o Manage.o main.o 
	g++ ./lib/main.o ./lib/Manage.o ./lib/SinglyLinkedList.o -o ./bin/program

main.o:
	g++ -I ./include/ -c ./src/main.cpp -o ./lib/main.o 

Manage.o:
	g++ -I ./include/ -c ./src/Manage.cpp -o ./lib/Manage.o

SinglyLinkedList.o:
	g++ -I ./include/ -c ./src/SinglyLinkedList.cpp -o ./lib/SinglyLinkedList.o

calistir:
	./bin/program