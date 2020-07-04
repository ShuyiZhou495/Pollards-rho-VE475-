all: main clean

main: main.o
	g++ -o main main.cpp -lgmp

main.o: main.cpp
	g++ -c main.cpp -lgmp

clean:
	rm -f *.o