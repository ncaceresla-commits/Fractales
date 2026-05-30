CC = gcc
CFLAGS = -g -Wall -Wextra -std=c11 -I.
LDLIBS = -lcsfml-graphics -lcsfml-window -lcsfml-system -lm

all: testLine fractal arbol rayo actividad1 actividad2 triangulo practica

testLine: turtlec.c examples/testLine.c turtlec.h
	$(CC) $(CFLAGS) turtlec.c examples/testLine.c -o testLine $(LDLIBS)

fractal: turtlec.c fractal.c turtlec.h
	$(CC) $(CFLAGS) turtlec.c fractal.c -o fractal $(LDLIBS)

arbol: turtlec.c arbol.c turtlec.h
	$(CC) $(CFLAGS) turtlec.c arbol.c -o arbol $(LDLIBS)

rayo: turtlec.c rayo.c turtlec.h
	$(CC) $(CFLAGS) turtlec.c rayo.c -o rayo $(LDLIBS)

actividad1: turtlec.c actividad1.c turtlec.h
	$(CC) $(CFLAGS) turtlec.c actividad1.c -o actividad1 $(LDLIBS)

actividad2: turtlec.c actividad2.c turtlec.h
	$(CC) $(CFLAGS) turtlec.c actividad2.c -o actividad2 $(LDLIBS)

triangulo: turtlec.c triangulo.c turtlec.h
	$(CC) $(CFLAGS) turtlec.c triangulo.c -o triangulo $(LDLIBS)

practica: turtlec.c practica.c turtlec.h
	$(CC) $(CFLAGS) turtlec.c practica.c -o practica $(LDLIBS)

clean:
	rm -f testLine fractal arbol rayo actividad1 actividad2 triangulo
