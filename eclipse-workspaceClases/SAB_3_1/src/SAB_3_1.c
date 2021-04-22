/*
 ============================================================================
Pedir el ingreso de 10 números enteros entre -1000 y 1000. Determinar:
a. Cantidad de positivos y negativos.
b. Sumatoria de los pares.
c. El mayor de los impares.
d. Listado de los números ingresados.
e. Listado de los números pares.
f. Listado de los números de las posiciones impares.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"
#define QTY_NUMEROS 10

int main(void) {

	setbuf(stdout, NULL);
	int arrayNum [QTY_NUMEROS];
	int contadorPositivos;
	int contadorNegativos;
	int maximoImpar;

	for (int i = 0; i<QTY_NUMEROS; i++)
	{
		utn_arrayNumero(&arrayNum [i], "Ingrese un numero", "Error", -1000, 1000);
	}

	if (utn_arrayPositivos(arrayNum, &contadorPositivos, QTY_NUMEROS)== 0)
	{
		printf ("Cantidad de positivos: %d", contadorPositivos);
	}
	if (utn_arrayNegativos(arrayNum, &contadorNegativos, QTY_NUMEROS)== 0)
	{
		printf ("Cantidad de negativos: %d", contadorNegativos);
	}
	if (utn_getMaximoImpar(arrayNum, QTY_NUMEROS, &maximoImpar)==0)
	{
		printf ("El mayor de los impares es: %d", maximoImpar);
	}
	return EXIT_SUCCESS;
}
