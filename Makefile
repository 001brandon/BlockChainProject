CC = g++



final: main.o sha256.o block.o transaction.o Blockchain.o
	$(CC) -g main.o sha256.o block.o transaction.o Blockchain.o -o test -lcrypto -lssl


main.o: main.cpp
	$(CC) -g -c main.cpp 

sha256.o: sha256.cpp
	$(CC) -g -c sha256.cpp

block.o: block.cpp
	$(CC) -g -c block.cpp

transaction.o: transaction.cpp
	$(CC) -g -c transaction.cpp

Blockchain.o:  Blockchain.cpp
	$(CC) -g -c Blockchain.cpp

clean:
	rm test main.o sha256.o block.o transaction.o Blockchain.o
