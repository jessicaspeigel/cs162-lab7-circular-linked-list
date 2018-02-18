output: main.o Menu.o InputValidation.o DriverFunctions.o DoubleLinkedList.o Node.o
	g++ -std=c++0x -g -Wall -pedantic-errors main.o Menu.o InputValidation.o DriverFunctions.o DoubleLinkedList.o Node.o -o lab6

main.o: main.cpp
	g++ -std=c++0x -g -Wall -pedantic-errors -c main.cpp

Menu.o: Menu.cpp
	g++ -std=c++0x -g -Wall -pedantic-errors -c Menu.cpp

InputValidation.o: InputValidation.cpp
	g++ -std=c++0x -g -Wall -pedantic-errors -c InputValidation.cpp

DriverFunctions.o: DriverFunctions.cpp
	g++ -std=c++0x -g -Wall -pedantic-errors -c DriverFunctions.cpp

DoubleLinkedList.o: DoubleLinkedList.cpp
	g++ -std=c++0x -g -Wall -pedantic-errors -c DoubleLinkedList.cpp

Node.o: Node.cpp
	g++ -std=c++0x -g -Wall -pedantic-errors -c Node.cpp

clean:
	rm *.o lab6