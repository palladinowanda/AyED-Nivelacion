#include <stdio.h>

#include "juego.h"

void jugar(PersonaPtr p, CartonPtr ganador)
{

    printf("\n--- CARTON DEL JUGADOR ---\n");
    CartonPtr c = getCarton(p);

    ordenarCarton(c);
    mostrarCarton(c);

    printf("\n--- CARTON GANADOR ---\n");
    mostrarCarton(ganador);

    int aciertos = contarAciertos(c, ganador);

    printf("\nCantidad de aciertos: %d\n", aciertos);

    if (aciertos == 8) {
        printf("¡TRIUNFO TOTAL!\n");
    } else {
        printf("No ganaste\n");
    }
}
