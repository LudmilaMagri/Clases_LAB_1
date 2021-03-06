/*
 * utn.c
 *
 *  Created on: 8 abr. 2021
 *      Author: ludmi
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utn.h"

static int getInt (int* pResultado)
{
	int retorno = -1;
	char buffer [4000];
	scanf ("%s", buffer);
	if (esNumerica (buffer))
	{
		retorno = 0;
		*pResultado = atoi (buffer); //atoi convierte a enteros
	}

	return retorno;
}

int utn_getNumero (int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos)
{
	int retorno= -1;
	int buffer;

	if (pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos>= 0)

		do
		{
			printf("%s", mensaje);
			//scanf("%d", &buffer);
			if (getInt(&buffer) == 0 && buffer >= minimo && buffer <= maximo)
			{
				*pResultado = buffer;
				retorno= 0;
				break;
			}
			reintentos--;
			printf ("%s", mensajeError);
		}while (reintentos>=0);


	return retorno;
}
