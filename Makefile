all: lower.o lowercase.o
	cc -o lower lower.o lowercase.o

lower.o: lower.c
	cc -c lower.c lowercase.h

lowercase.o: lowercase.c 
	cc -c lowercase.c lowercase.h

clean:
	rm *.o
	rm lower
