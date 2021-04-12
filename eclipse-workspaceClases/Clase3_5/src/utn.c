/*
 * utn.c
 *
 *  Created on: 25 mar. 2021
 *      Author: ludmi
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

 int utn_getNumero (int* pNumeroIngresado, char* pTexto, char* pFueraRango, int min, int max, int reintentos)
 {
	 int retorno= -1

	do
	{
		printf ("%s", pTexto);
		fflush(stdin);

		if (scanf ("%d", pNumeroIngresado)==1) //da 1 porque lo pudo convertir , devuelve 0 cuando ingreso una variable dif a numero
		{
			if ((*pNumeroIngresado)>= min && (*pNumeroIngresado) <max)
			{
				retorno= 0;
				break;
				//reintentos =-1; otra opcion para romper el bucle
			}
			else
			{
				printf ("%s", pFueraRango);
				reintentos--;
			}
		}
		else
		{
			printf ("No es un numero");
			reintentos--;
		}

	} while (reintentos>0);

	return retorno;
}

 static void funcionPrivada (void) //prototipos funciones privadas
 {
	 printf ("holis");
 }



// int utn_getFloat (float* pNum,)

// int utn_getChar (char* pNum) sin max y min. de la A a la Z (, 'A', 'Z')
