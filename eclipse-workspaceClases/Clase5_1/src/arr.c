/*
 * utn.c
 *
 *  Created on: 30 mar. 2021
 *      Author: marco
 */
// unsigned int: abarca mas numeros
//valor por referencia: referencia de la var que nos esta llamando para poder escribir en ella
// a un puntero lo verificas con que sea != NULL
#include "arr.h"

#include <stdio.h>
#include <stdlib.h>

int arr_getInt (int* pResultado, char* pMensaje, char* pMensajeError, int minimo, int maximo, int reintento)
{
	int retorno = -1;
	int bufferInt;

	if (pResultado != NULL && pMensaje != NULL && pMensajeError != NULL && minimo <= maximo && reintento >= 0)
	{
		retorno = -2; //error de otra cosa, no es de parametro, es de otro tipo
		do
		{
			printf ("%s", pMensaje);
			fflush (stdin);
			scanf ("%d", &bufferInt);

			if (bufferInt >= minimo && bufferInt <= maximo )
			{
				retorno = 0;
				*pResultado = bufferInt;
				break;
			}
			printf ("%s", pMensajeError);
			reintento --;
		}while (reintento >= 0);
	}
	return retorno;
}

/*int utn_getChar (char* pResultado, char* pMensaje, char* pMensajeError, char minimo, char maximo, int reintento)
{
	int retorno = -1;
	char bufferChar;

	if (pResultado != NULL && pMensaje != NULL && pMensajeError != NULL && minimo <= maximo && reintento >= 0)
	{
		retorno = -2; //error de otra cosa, no es de parametro, es de otro tipo
		do
		{
			printf ("%s", pMensaje);
			fflush (stdin);
			scanf ("%c", &bufferChar);

			if (bufferChar >= minimo && bufferChar <= maximo )
			{
				retorno = 0;
				*pResultado = bufferChar;
				break;
			}
			printf ("%s", pMensajeError);
			reintento --;
		}while (reintento >= 0);
	}
	return retorno;
}*/

int arr_getMaximo (int arrayMax[], int limite, int* pResultado)
{
	int retorno = -1;
	int maximo;

	if (pResultado != NULL && arrayMax != NULL && limite>0)
	{
		maximo = arrayMax [0];

		for (int i =0; i < limite; i++)
		{
			if (arrayMax [i] > maximo)
			{
				maximo = arrayMax[i];
			}
		}
		*pResultado= maximo;
		retorno = 0;
	}

	return retorno;
}
int arr_getMinimo (int* arrayMin, int limite, int* pResultado)
{
	int retorno = -1;
	int minimo;

		if (pResultado != NULL && arrayMin != NULL && limite>0)
		{
			minimo= arrayMin [0];

			for (int i =0; i < limite; i++)
			{
				if (arrayMin [i] < minimo)
				{
					minimo = arrayMin[i];
				}
			}
			*pResultado= minimo;
			retorno= 0;
		}

		return retorno;
}
int arr_getPromedio (int* arrayPromedio, int limite, float* pResultado)
{

	int retorno = -1;
	int acumulador =0;
	float auxPromedio = 0;


	if (pResultado != NULL && arrayPromedio != NULL && limite>0)
	{

		for (int i =0; i < limite; i++)
		{
			acumulador = acumulador + arrayPromedio [i];
		}
		auxPromedio = (float) acumulador / limite;
		*pResultado = auxPromedio;
		retorno = 0;
	}

		return retorno;
}
