#ifndef CARTON_H_INCLUDED
#define CARTON_H_INCLUDED

typedef struct CartonE* CartonPtr;

CartonPtr crearCarton1(char d[15]);
void cargarCarton(CartonPtr c);
void mostrarCarton(CartonPtr c);
void ordenarCarton(CartonPtr c);
int contarAciertos(CartonPtr c, CartonPtr ganador);
void destruirCarton(CartonPtr c);

#endif // CARTON_H_INCLUDED
