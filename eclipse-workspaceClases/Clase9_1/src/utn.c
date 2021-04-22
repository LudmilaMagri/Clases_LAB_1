/*
 * utn.c
 *
 *  Created on: 20 abr. 2021
 *      Author: ludmi
 */

/**
 * \brief Verifica si el valor recibido es numérico
 * \param cadena Array con la cadena a ser analizada
 * \return 1 si es númerico y 0 si no lo es
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


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

int myGets (char* cadena, int longitud)
{
	fflush(stdin);
	fgets (cadena, longitud, stdin); //cadena es donde deja la informacion,  tiene una longitud, lee un archivo stdin que es lo que igresa el usuario

	cadena[strlen(cadena)-1] = '\0';
	return 0;
}


int esNumerica (char cadena[]) //devuelven V o F
{
	int retorno = 1; //V = 1
	int i;

	if (cadena [i] != NULL)
	{
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
	}

	return retorno;
}
/**
 * \brief Verifica si el valor recibido contiene solo letras
 * \param cadena Array con la cadena a ser analizada
 * \return 1 si contiene solo ' ' y letras y 0 si no contiene letras
 *
 */

int soloLetras (char cadena [])
{
	int retorno = 1;
	int i;

	if (cadena [i] != NULL)
	{
		for (i= 0; cadena [i] != '\0'; i++)
		{
			if ((cadena[i] != ' ') && (cadena [i] < 'a' || cadena [i]> 'z') && (cadena [i]< 'A' || cadena [i]> 'Z'))
			{
				retorno = 0;
			}
		}
	}
	return retorno;
}


int getStringLetras (char cadena [], int longitud)
{
	fgets (cadena, longitud, stdin); //cadena es donde deja la informacion,  tiene una longitud, lee un archivo stdin que es lo que igresa el usuario

	cadena[strlen(cadena)-1] = '\0';
	return 0;
}

/**
 * \brief Verifica si el valor recibido contiene solo letras y números
 * \param cadena Array con la cadena a ser analizada
 * \return 1 si contiene solo espacio o letras y números, y 0 si no lo es
 *
 */
int numerosLetras (char cadena [])
{
	int retorno = 1;
	int i;

	if (cadena [i] != NULL)
	{
		for (i=0; cadena [i] != '\0'; i++)
		{
		   if((cadena[i] != ' ') && (cadena[i] < 'a' || cadena[i] > 'z') && (cadena[i] < 'A' || cadena[i] > 'Z') && (cadena[i] < '0' || cadena[i] > '9'))
		   {
			   retorno = 0;
		   }
		}
	}

	   return retorno;
}

/**
 * \brief Verifica si el valor recibido contiene solo números y un guion
 * \param cadena Array con la cadena a ser analizada
 * \return 1 si contiene solo numeros, espacios y un guion.
 *
 */
int utn_isValidTelefono(char cadena [], int min, int max)
{
	int retorno = 1;
	int i;
	int contadorGuiones= 0;

	if (cadena [i] != NULL)
	{
		for (i=0; cadena[i] != '\0'; i++)
		{
			if ((cadena[i] != ' ') && (cadena[i] != '-') && (cadena[i] < '0' || cadena[i] > '9') && (cadena[i]<=max || cadena[i]>=min))
			{
				retorno = 0;
			}
			if (cadena [i] == '-')
			{
				contadorGuiones++;
			}
		}
		if (contadorGuiones == 1)
		{
			return retorno;
		}
	}

	return retorno = 1;
}

int utn_isValidDni(char cadena [], int max)
{
	int retorno = 0;
	char buffer [4000];
	int i;

	if (cadena[i] != NULL)
	{
		if (myGets(buffer, sizeof (buffer)) == 0 && esNumerica(buffer) == 0 && cadena [i]< max)
		{
			retorno = 1;
		}

	}
	return retorno;
}

