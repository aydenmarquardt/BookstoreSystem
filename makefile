BookShopSys: bookDatabase.o main.o
		g++ -g bookDatabase.o main.o -o BookSystem

main.o: bookDatabase.h main.cpp
		g++ -c -g main.cpp -l sqlite3

bookDatabase.o: bookDatabase.h bookDatabase.cpp
		g++ -c -g -l sqlite3 bookDatabase.cpp

clean: 
		rm *.o
		rm BookSystem

run: BookSystem
		./BookSystem

debug: BookSystem
		gdb BookSystem

valgrind: BookSystem
		valgrind --leak-check=full ./BookSystem