derlecalistir: program calistir

program: Stack.o Manage.o main.o 
	g++ ./lib/main.o ./lib/Manage.o ./lib/Stack.o -o ./bin/program

main.o:
	g++ -I ./include/ -c ./src/main.cpp -o ./lib/main.o 

Manage.o:
	g++ -I ./include/ -c ./src/Manage.cpp -o ./lib/Manage.o

Stack.o:
	g++ -I ./include/ -c ./src/Stack.cpp -o ./lib/Stack.o

calistir:
	./bin/program