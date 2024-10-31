C = gcc
CFLAGS =-g -Wall -pedantic -ansi
OBJ = box.o map.o main.o terminal.o random.o color.o
EXEC = box




$(EXEC) : $(OBJ)
	                         $(CC) $(OBJ) -o $(EXEC)

box.o : box.c main.h map.h terminal.h random.h
				 $(CC) -c box.c $(CFLAGS)

main.o : main.h random.h
				 $(CC) -c main.c $(CFLAGS)

map.o : map.h
	                         $(CC) -c map.c $(CFLAGS)

terminal.o : terminal.h
				$(CC) -c terminal.c $(CFLAGS)

random.o : random.h
				$(CC) -c random.c $(CFLAGS)

color.o : color.h
				 $(CC) -c color.c $(CFLAGS)


clean:
	                        rm -f $(EXEC) $(OBJ)
