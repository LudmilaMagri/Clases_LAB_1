/*
 ============================================================================
 Name        : Clase5_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 main: pedir una cantidad de edades
 funcion que calcule el maximo, min, promedio,
 funcion de maximo: int

 */

/*
 * \brief Imprime a modo DEBUG la informacion de un array de enteros
 * \param pArray Es el puntero al array a ser ordenado
 * \param size Es la longitud del array
 * \return 0 si Ok o -1 para indicar un error
 * */

#include <stdio.h>
#include <stdlib.h>

#include "arr.h"

#define CANTIDAD_EDADES 5

int main(void)
{
	setbuf(stdout, NULL);
	int arrayEdades [CANTIDAD_EDADES] ;
	float valorPromedioArr;
	int valorMax;
	int valorMin;


	for (int i=0; i<CANTIDAD_EDADES; i++)
	{
		arr_getInt (&arrayEdades[i], "Edad?", "Error", 0, 150, 2); //llenar un arrays, carga secuencial
		//acumuladorEdades+= arrayEdades[i] ; //lectura secuencial
	}

	if (arr_getPromedio(arrayEdades, CANTIDAD_EDADES, &valorPromedioArr)== 0)
	{
		printf ("\nPromedio: %2.f", valorPromedioArr);
	}
	else
	{
		printf ("Error");
	}
	if (arr_getMaximo(arrayEdades, CANTIDAD_EDADES, &valorMax) == 0)
	{
		printf ("\nEl valor maximo es: %d", valorMax);
	}
	else
	{
		printf ("Error");
	}
	if (arr_getMinimo(arrayEdades, CANTIDAD_EDADES, &valorMin)== 0)
	{
		printf ("\nEl valor minimo es: %d", valorMin);
	}
	else
	{
		printf ("Error");
	}



	return EXIT_SUCCESS;
}




