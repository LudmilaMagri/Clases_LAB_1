/*
 ============================================================================
 Name        : proyecto.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

//pedir dos numeros, sumarlos e imprimir resultado
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);
	int numeroUno;
	int numeroDos;
	int suma;

	printf("Ingrese un numero");
	scanf("%d", &numeroUno);

	printf("Ingrese otro numero");
	scanf("%d", &numeroDos);

	suma = numeroUno+numeroDos;

	printf("La suma es: %d", suma);
	return 0;
}


