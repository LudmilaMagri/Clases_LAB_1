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
	setbuf(stdout,NULL);
	int numeroIngresado;
	int contadorPositivos=0;
	int contadorNegativos=0;

	for (int i=0; i<10; i++)
	{
		printf ("Ingrese un numero\n");
		scanf ("%d", &numeroIngresado);


		if (numeroIngresado>0)
			{
				contadorPositivos++;
			}

		else
			{
				contadorNegativos++;
			}

	}
	printf ("El total de numeros positivos es: %d", contadorPositivos);
	printf("El total de numeros negativos es: %d", contadorNegativos);


	return 0;
}

