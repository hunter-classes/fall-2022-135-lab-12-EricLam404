main: main.o vectors.o optimism.o fusion.o pairwise.o
	g++ -o main main.o vectors.o optimism.o fusion.o pairwise.o

tests: tests.o vectors.o optimism.o fusion.o pairwise.o
	g++ -o tests tests.o vectors.o optimism.o fusion.o pairwise.o

main.o: main.cpp
	g++ -c -std=c++11 main.cpp

vectors.o: vectors.cpp
	g++ -c -std=c++11 vectors.cpp

optimism.o: optimism.cpp
	g++ -c -std=c++11 optimism.cpp

fusion.o: fusion.cpp
	g++ -c -std=c++11 fusion.cpp

pairwise.o: pairwise.cpp
	g++ -c -std=c++11 pairwise.cpp

tests.o: tests.cpp doctest.h 
	g++ -c -std=c++11 tests.cpp 

clean:
	rm -f *.o main tests 