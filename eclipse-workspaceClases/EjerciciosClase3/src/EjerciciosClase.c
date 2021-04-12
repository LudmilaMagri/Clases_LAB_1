/*
 ============================================================================
 Name        : proyecto.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int numero;

	setbuf(stdout,NULL);

	printf ("Ingrese un numero\n");
	//funcion que espera el ingreso

	scanf("%d", &numero);

	printf ("Ingresaste: %d", numero);

	return 0;
}
