derlecalistir: program calistir

program: Queue.o Manage.o main.o 
	g++ ./lib/main.o ./lib/Manage.o ./lib/Queue.o -o ./bin/program

main.o:
	g++ -I ./include/ -c ./src/main.cpp -o ./lib/main.o 

Manage.o:
	g++ -I ./include/ -c ./src/Manage.cpp -o ./lib/Manage.o

Queue.o:
	g++ -I ./include/ -c ./src/Queue.cpp -o ./lib/Queue.o

calistir:
	./bin/program