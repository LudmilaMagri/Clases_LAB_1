/*
 ============================================================================
 Name        : ordenamiento_burb.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define QTY_EMPLEADOS 9

int printArrayInt(int* pArray, int limite);
int ordenarArrayInt (int* pArray, int limite);

int main(void)
{
	setbuf(stdout, NULL);
	int arrayEdades [QTY_EMPLEADOS]= {54,26,93,17,77,31,44,55,27};
	int respuesta;

	printArrayInt(arrayEdades, QTY_EMPLEADOS);

	respuesta= ordenarArrayInt(arrayEdades, QTY_EMPLEADOS);
	if (respuesta >0)
	{
		printf ("\n Iteraciones: %d", respuesta);
	}

	printArrayInt(arrayEdades, QTY_EMPLEADOS);

		respuesta= ordenarArrayInt(arrayEdades, QTY_EMPLEADOS);
		if (respuesta >0)
		{
			printf ("\n Iteraciones: %d", respuesta);
		}
	return EXIT_SUCCESS;
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

/*
 * \brief ordena un array de enteros DESCENDENTE
 * \param pArray Es el puntero al array a ser ordenado
 * \param size Es la longitud del array
 * \return cantidad de iteraciones necesarias para ordenar si Ok o -1 para indicar un error
 * */

int ordenarArrayInt (int* pArray, int limite)
{
	int flagSwap;
	int i;
	int contador=0;
	int retorno = -1;
	int buffer;
	int nuevoLimite;

	if (pArray != NULL && limite >= 0)
	{
		nuevoLimite= limite-1;
		do
		{
			flagSwap=0;
			for (i=0; i<nuevoLimite; i++)
			{
				if (pArray [i] > pArray [i+1]) //cuando el de la izq es mas grande
				{
					flagSwap= 1; //fuerza una nueva vuelta del while
					buffer = pArray [i];
					pArray[i] = pArray [i+1];
					pArray [i+1] = buffer;
				}
				contador++;
			}
		}while (flagSwap);
		retorno = contador;
	}
	return retorno;
}

