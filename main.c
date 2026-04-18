#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "persona.h"
#include "carton.h"
#include "sorteo.h"
#include "juego.h"

int main()
{
    srand(time(0));

    PersonaPtr jugador = crearPersona(12345678, "Wanda");
    mostrarPersona(jugador);

    CartonPtr ganador = crearCartonGanador();

    jugar(jugador, ganador);

    destruirCarton(ganador);
    destruirPersona(jugador);

    return 0;
}
