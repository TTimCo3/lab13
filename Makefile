CC=g++

CFLAGS=-c -Wall
objects= lab13.o
target= lab13

target: $(objects)
	$(CC) $(objects) -o $(target)

%.o: %.cpp
	$(CC) $(CFLAGS) $<

clean:
	rm -rf *.o $(target)