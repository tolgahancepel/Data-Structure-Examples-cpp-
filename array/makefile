derlecalistir: program calistir

program: main.o
	g++ ./lib/main.o -o ./bin/program

main.o:
	g++ -I ./include/ -c ./src/main.cpp -o ./lib/main.o 

calistir:
	./bin/program