/*
 ============================================================================
Realizar un programa que permita el ingreso de 10 números enteros.
Determinar el promedio de los positivos, la cantidad de ceros y de los
negativos la suma de los antecesores.
Nota:
Utilizar la función del punto anterior y desarrollar funciones para resolver los
procesos que están resaltados.
==============================
 */

#include <stdio.h>
#include <stdlib.h>

int promedioPositivos (int* numeros, int acumulador, int contador);

int main(void) {
	setbuf(stdout,NULL);

	int num;
	int contadorNum = 0;
	int acumuladorNum=0;

	for (int i=0; i<10; i++)
	{
		printf ("Ingrese un numero");
		fflush (stdin);
		scanf ("%d", &num);

		contadorNum++;
		acumuladorNum = acumuladorNum+1;
	}

	if (promedioPositivos (&numeros, acumulador, contador)
	{
		printf ("El promedio es: %f", numeros);
	}
}



int promedioPositivos (int* numeros, int* acumulador, int* contador)
{
	int retorno= 1;

	if (numeros>0)
	{
		*numeros = (float)acumulador/contador;
		retorno=0;
	}
	return retorno;
}

