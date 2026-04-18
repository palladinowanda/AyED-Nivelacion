#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "persona.h"

struct PersonaE{
    int dni;
    char nombre[15];
    CartonPtr cartonDeLaPersona;
};

PersonaPtr crearPersona(int d, char n[15])
{
    PersonaPtr p = (PersonaPtr) malloc(sizeof(struct PersonaE));

    p->dni = d;
    strcpy(p->nombre, n);
    p->cartonDeLaPersona = crearCarton1("AV. PERON 1130");

    return p;
}

void destruirPersona(PersonaPtr p)
{
    destruirCarton(p->cartonDeLaPersona);
    free(p);
}

void mostrarPersona(PersonaPtr p)
{
    printf("\n------ PERSONA ------\n");
    printf("DNI: %d\n", p->dni);
    printf("NOMBRE: %s\n", p->nombre);
}

CartonPtr getCarton(PersonaPtr p) {
    return p->cartonDeLaPersona;
}
