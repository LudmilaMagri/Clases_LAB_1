/*
 ============================================================================
 Name        : Clase8_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define CANTIDAD_EMPLEADOS 20

int main(void) {

	Persona arrayEmpleados[CANTIDAD_EMPLEADOS];

	per_alta (arrayEmpleados , CANTIDAD_EMPLEADOS, 0, "Juan", "Perez", 1.55, 56);
	return EXIT_SUCCESS;
}
