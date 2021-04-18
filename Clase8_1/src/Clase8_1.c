/*
 ============================================================================
 Name        : Clase8_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Alumno.h"
#define QTY_ALUMNOS 50

int main(void) {
	setbuf(stdout, NULL);

	Alumno auxiliar;
	Alumno arrayAlumnos [QTY_ALUMNOS];
	auxiliar.altura = 2.04;
	auxiliar.legajo= 25;
	strcpy(auxiliar.nombre, "JUAN");

	//printf ("Nombre: %s - Legajo %d - Altura %2.f", auxiliar.nombre, auxiliar.legajo, auxiliar.altura);

	arrayAlumnos[2] = auxiliar;

	imprimirArrayAlumnos (arrayAlumnos, QTY_ALUMNOS);

	return EXIT_SUCCESS;


}
