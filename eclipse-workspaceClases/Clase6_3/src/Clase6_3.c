/*
 ============================================================================
 Name        : Clase6_3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define NUMEROS 5

int ordenarArray (int* pArray, int limite);
int printArrayInt (int* pArray, int limite);

int main(void) {

	setbuf(stdout, NULL);
	int array [NUMEROS] = {45, 5, 10, 17, 77};
	int respuesta;

	printArrayInt (array, NUMEROS);
	respuesta= ordenarArray (array, NUMEROS);

	if (respuesta >0 )
	{
		printf ("Iteraciones: %d", respuesta);
	}
	printArrayInt (array, NUMEROS);
	respuesta= ordenarArray (array, NUMEROS);

	if (respuesta >0 )
	{
		printf ("Iteraciones: %d", respuesta);
	}
	return EXIT_SUCCESS;
}

int ordenarArray (int* pArray, int limite)
{
	int retorno= -1;
	int flagSwap;
	int bufferInt; //un aux para guardar un valor para hacer el swap en dos posiciones del array
	int contador = 0;

	if (pArray!=NULL && limite > 0)
	{
		retorno = 0;
		do
		{
			flagSwap= 0;
			limite--;
			for(int i=0; i<limite; i++)
			{
				if (pArray[i]<pArray[i+1])
				{
					flagSwap = 1;
					bufferInt = pArray [i];
					pArray[i] = pArray [i+1];
					pArray[i+1] = bufferInt;
					retorno++;
				}
				contador++;
			}
		}while (flagSwap);
	}
	return retorno;
}

int printArrayInt (int* pArray, int limite)
{
	int retorno = -1;
	int i;
	if (pArray != NULL && limite >= 0)
	{
		retorno = 0;
		for (i=0; i<limite; i++)
		{
			printf ("\n [DEBUG] Indice: %d --- Valor: %d", i, pArray[i]);
		}

	}
	return retorno;
}
