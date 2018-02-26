output: main.o Menu.o InputValidation.o DriverFunctions.o Queue.o
	g++ -std=c++0x -g -Wall -pedantic-errors main.o Menu.o InputValidation.o DriverFunctions.o Queue.o -o lab7

main.o: main.cpp
	g++ -std=c++0x -g -Wall -pedantic-errors -c main.cpp

Menu.o: Menu.cpp
	g++ -std=c++0x -g -Wall -pedantic-errors -c Menu.cpp

InputValidation.o: InputValidation.cpp
	g++ -std=c++0x -g -Wall -pedantic-errors -c InputValidation.cpp

DriverFunctions.o: DriverFunctions.cpp
	g++ -std=c++0x -g -Wall -pedantic-errors -c DriverFunctions.cpp

Queue.o: Queue.cpp
	g++ -std=c++0x -g -Wall -pedantic-errors -c Queue.cpp

clean:
	rm *.o lab7