/*
 ============================================================================
 Name        : Prueba1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int sumarConLimite (int operador1, int operador2); //declaro el prototipo

int main(void) {
	setbuf (stdout, NULL);

	int num1;
	int num2;
	int suma;


	printf ("Ingrese un numero");
	scanf ("%d", &num1);
	printf ("Ingrese otro numero");
	scanf ("%d", &num2);

	suma = sumarConLimite (num1, num2);
	printf("La suma es %d", suma);

	return EXIT_SUCCESS;
}

//funciones auxiliares de mi programa
//definicion de la funcion sumarConLimite

//TIPO 	NOMBRE FUNCION (TIPO NOMBRE ARGUMENTO.. )
	int sumarConLimite (int operador1, int operador2) //prototipo
	{
		int resultado; //variable local de la funcion. Adentro de esta funcion num1 y num2 no existen porque murieron en main

		resultado= operador1+operador2;

		if (resultado>100)
		{
			resultado= 100;
		}

		//retornar valor
		return resultado;
	}
