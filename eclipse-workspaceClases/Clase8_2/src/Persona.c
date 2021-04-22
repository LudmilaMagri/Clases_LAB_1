/*
 * Persona.c
 *
 *  Created on: 20 abr. 2021
 *      Author: ludmi
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Persona.h"


/**
 * \brief Carga valores iniciales en el array
 * \param Persona [] aPersona : Puntero a estructura Persona
 * \param int limite: Limite del array
 * \param int indice: Indica en que posicion cargar los datos
 * \param char [] nombre: Es el nombre de la persona
 * \param char [] apellido: Es el apellido de la persona
 * \param float altura: Es la altura de la persona expresada en metros
 * \param float peso: Es el peso de la persona expresado en kilos
 * \return int
 */

int per_alta (Persona aPersonas [], int limite, int indice, char nombre [], char apellido [], float altura, float peso)
{
	int retorno = -1;
	if (aPersonas != NULL && limite > 0 && indice >= 0 &&
		indice < limite && nombre != NULL && apellido != NULL &&
		altura >0 && peso>0)
	{
		strcpy(aPersonas[indice].nombre, nombre);
		strcpy(aPersonas[indice].apellido, apellido);
		aPersonas [indice].altura= altura;
		aPersonas [indice].peso = peso;
	}

	return retorno;
}

int esNumerica (char* cadena) //devuelven V o F
{
	int retorno = 1; //V = 1
	int i;

	if (cadena [0] == '-') //para un numero negativo
	{
		i = 1;
	}
	else
	{
		i = 0;
	}
	for ( ; cadena[i] != '\0'; i++)
	{

		if (cadena [i] > '9' || cadena[i]< '0')// si no esta dentro de este rango es falso, quiere decir que puso alguna letra
		{
			retorno = 0;
			break;
		}
	}
	return retorno;
}

int myGets (char* cadena, int longitud)
{
	fflush(stdin);
	fgets (cadena, longitud, stdin); //cadena es donde deja la informacion,  tiene una longitud, lee un archivo stdin que es lo que igresa el usuario

	cadena[strlen(cadena)-1] = '\0';
	return 0;
}

int getInt (int* pResultado)
{
	int retorno = -1;
	char buffer [4099];

	if (myGets(buffer, sizeof (buffer)) == 0 && esNumerica (buffer)) //esNumerica me indica que dentro de ella hay numeros
	{
		retorno = 0;
		*pResultado = atoi(buffer); //dentro del buffer me tengo que asegurar que hay numeros
	}


	return retorno;
}


int utn_getNumero (int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos)
{
	int retorno = -1;
	int buffer;

	if (pResultado!= NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos>= 0)
	{
		do
		{
			printf ("%s", mensaje);
			//getInt si devuelve un 0 es porque obtuvo un entero.
			if (getInt (&buffer)==0 && buffer >= minimo && buffer <= maximo)
			{
				*pResultado = buffer;
				retorno = 0;
				break;
			}
			reintentos--;
			printf ("%s", mensajeError);
		}while(reintentos >=0);
	}

	return retorno;
}
