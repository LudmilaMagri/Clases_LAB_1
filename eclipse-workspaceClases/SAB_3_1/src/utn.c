/*
Pedir el ingreso de 10 números enteros entre -1000 y 1000. Determinar:
a. Cantidad de positivos y negativos.
b. Sumatoria de los pares.
c. El mayor de los impares.
d. Listado de los números ingresados.
e. Listado de los números pares.
f. Listado de los números de las posiciones impares.
 */
#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int utn_arrayNumero (int* pResultado, char* pMensaje, char* pMensajeError, int minimo, int maximo)
{
	int retorno = -1;
	int bufferInt;

	if (pResultado != NULL && pMensaje != NULL && pMensajeError != NULL && minimo <= maximo)
	{
		printf ("%s", pMensaje);
		fflush (stdin);
		scanf ("%d", &bufferInt);
		if (bufferInt >= minimo && bufferInt <= maximo )
		{
			retorno = 0;
			*pResultado = bufferInt;
		}
		else
		{
			printf ("%s", pMensajeError);
		}
		return retorno;
	}
	return retorno;
}

int utn_arrayPositivos (int* arrayPos, int* pResultado, int limite)
{
	int retorno = -1;
	int contadorPositivos= 0;
	//int contadorNegativos = 0;

	if (pResultado != NULL && limite>0)
	{
		for (int i = 0; i<limite; i++)
		{
			if (arrayPos [i]>0)
			{
				contadorPositivos++;
			}
		}
		retorno = 0;
		*pResultado = contadorPositivos++;
	}
	return retorno;
}

int utn_arrayNegativos (int* arrayNeg, int* pResultado, int limite)
{
	int retorno = -1;
	int contadorNegativos = 0;

	if (pResultado != NULL && limite>0)
	{
		for (int i = 0; i<limite; i++)
		{
			if (arrayNeg [i]<0)
			{
				contadorNegativos++;
			}
		}
		retorno = 0;
		*pResultado = contadorNegativos++;
	}
	return retorno;
}

int utn_getMaximoImpar (int arrayMax[], int limite, int* pResultado)
{
	int retorno = -1;
	int maximo;

	if (pResultado != NULL && arrayMax != NULL && limite>0)
	{
		maximo = arrayMax [0];

		for (int i =0; i < limite; i++)
		{
			if (arrayMax[i]> maximo)
			{
				if (arrayMax [i] % 1)
				{
					maximo = arrayMax[i];
				}
			}
		}
		*pResultado= maximo;
		retorno = 0;
	}

	return retorno;
}

