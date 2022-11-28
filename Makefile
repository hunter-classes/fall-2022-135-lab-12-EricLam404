main: main.o
	g++ -o main main.o 

tests: tests.o
	g++ -o tests tests.o

main.o: main.cpp

tests.o: tests.cpp doctest.h 
	g++ -c -std=c++11 tests.cpp

clean:
	rm -f *.o main tests