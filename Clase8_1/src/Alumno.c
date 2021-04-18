/*
 * utn.c
 *
 *  Created on: 15 abr. 2021
 *      Author: marco
 */
//desarrollo de Alumno}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Alumno.h"

/**
 * \brief imprimo el array de alumnos
 * \param pArray Puntero al array de alumnos
 * \param longitud define el tamaño del array
 * \return retorna 0 (exito) si ok y -1 (error)
 */

int imprimirArrayAlumnos(Alumno* pArray, int limite)
{
	int retorno = -1;
	int i;
	if (pArray != NULL && limite>0)
	{
		for (i=0; i < limite; i++)
		{
			printf ("\nNombre: %s - Legajo %d - Altura %2.f", pArray[i].nombre, pArray[i].legajo, pArray[i].altura);

		}
		retorno = 0;
	}

	return retorno;
}
