#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

#include "carton.h"

typedef struct PersonaE* PersonaPtr;

PersonaPtr crearPersona(int d, char n[15]);
CartonPtr getCarton(PersonaPtr p);
void mostrarPersona(PersonaPtr p);
void destruirPersona(PersonaPtr p);

#endif // PERSONA_H_INCLUDED
