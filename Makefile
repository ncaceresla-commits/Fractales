CC = gcc
CFLAGS = -g -Wall -Wextra -std=c11 -I.
LDLIBS = -lcsfml-graphics -lcsfml-window -lcsfml-system -lm

all: testLine fractal arbol rayo actividad1 actividad2 triangulo practica probando_angulos profundidad factor_reduccion curva reto

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
probando_angulos: turtlec.c probando_angulos.c turtlec.h
	$(CC) $(CFLAGS) turtlec.c probando_angulos.c -o probando_angulos $(LDLIBS) 
profundidad: turtlec.c profundidad.c turtlec.h
	$(CC) $(CFLAGS) turtlec.c profundidad.c -o profundidad $(LDLIBS)
factor_reduccion: turtlec.c factor_reduccion.c turtlec.h
	$(CC) $(CFLAGS) turtlec.c factor_reduccion.c -o factor_reduccion $(LDLIBS)
curva: turtlec.c curva.c turtlec.h
	$(CC) $(CFLAGS) turtlec.c curva.c -o curva $(LDLIBS)
reto: turtlec.c reto.c turtlec.h
	$(CC) $(CFLAGS) turtlec.c reto.c -o reto $(LDLIBS)
clean:
	rm -f testLine fractal arbol rayo actividad1 actividad2 triangulo practica probando_angulos profundidad factor_reduccion
