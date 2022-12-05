main: main.o vectors.o optimism.o
	g++ -o main main.o vectors.o optimism.o

tests: tests.o
	g++ -o tests tests.o

main.o: main.cpp
	g++ -c -std=c++11 main.cpp

vectors.o: vectors.cpp
	g++ -c -std=c++11 vectors.cpp

optimism.o: optimism.cpp
	g++ -c -std=c++11 optimism.cpp

tests.o: tests.cpp doctest.h 
	g++ -c -std=c++11 tests.cpp

clean:
	rm -f *.o main tests vectors optimism