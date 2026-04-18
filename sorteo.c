#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "sorteo.h"

CartonPtr crearCartonGanador() {
    CartonPtr s = crearCarton1("AV. PERON 1130");
    ordenarCarton(s);
    return s;
}
