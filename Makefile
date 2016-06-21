CC = g++
CFLAGS = -Wall -g -std=c++11

all: main

clean:
	rm -rf *o
	rm vector_ex

main.o:
	${CC} ${CFLAGS} -c vector_exercise.cc

main: main.o
	${CC} ${CFLAGS} vector_exercise.o -o vector_ex
