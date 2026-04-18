#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "carton.h"

struct CartonE{
    int vec[8];
    char direccion[15];
};

CartonPtr crearCarton1(char d[15]){
    CartonPtr c = (CartonPtr) malloc(sizeof(struct CartonE));

    strcpy(c->direccion, d);

    for (int i = 0; i < 8; i++){
        int nuevo;
        int repetido = 1;

        while (repetido) {
            nuevo = rand() % 100;
            repetido = 0;

            for (int j = 0; j < i; j++) {
                if (c->vec[j] == nuevo) {
                    repetido = 1;
                }
            }
        }

        c->vec[i] = nuevo;
    }

    return c;
}

void destruirCarton(CartonPtr c) {
    free(c);
}

void mostrarCarton(CartonPtr c){
    printf("\n\t------ CARTON ------\n");
    printf("\tDIRECCION: %s\n\t---JUGADA---\n\t", c->direccion);
    for (int i = 0 ; i < 8; i++){
        printf(" %d ", c->vec[i]);
    }
    printf("\n");
}

void ordenarCarton(CartonPtr c) {
    for (int i = 0; i < 7; i++) {
        for (int j = i+1; j < 8; j++) {
            if (c->vec[i] > c->vec[j]) {
                int aux = c->vec[i];
                c->vec[i] = c->vec[j];
                c->vec[j] = aux;
            }
        }
    }
}

int contarAciertos(CartonPtr c, CartonPtr ganador) {
    int aciertos = 0;

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (c->vec[i] == ganador->vec[j]) {
                aciertos++;
            }
        }
    }

    return aciertos;
}
