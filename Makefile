output: main.o Menu.o InputValidation.o RecursiveFunctions.o
	g++ -std=c++0x -g -Wall -pedantic-errors main.o Menu.o InputValidation.o RecursiveFunctions.o -o lab5

main.o: main.cpp
	g++ -std=c++0x -g -Wall -pedantic-errors -c main.cpp

Menu.o: Menu.cpp
	g++ -std=c++0x -g -Wall -pedantic-errors -c Menu.cpp

InputValidation.o: InputValidation.cpp
	g++ -std=c++0x -g -Wall -pedantic-errors -c InputValidation.cpp

RecursiveFunctions.o: RecursiveFunctions.cpp
	g++ -std=c++0x -g -Wall -pedantic-errors -c RecursiveFunctions.cpp

clean:
	rm *.o lab5