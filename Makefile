
CC=clang++
CFLAGS= -O3 -Wall -Werror -Weverything -pedantic -ansi

all:
	$(CC) $(CFLAGS) src/Clique.cpp src/CliqueMaster.cpp src/main.cpp
	
