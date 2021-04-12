/*
 ============================================================================
Crear una función que reciba como parámetro un numero entero. La función
retornara 1 en caso de que sea positivo, -1 en caso de que sea negativo y 0 en
caso de que sea 0. Realizar la prueba lógica de la función en el main.
==============================
 */

#include <stdio.h>
#include <stdlib.h>

int numero (int num1);
float promedio (int acumulador, int contador);
int sumaAntecesores (int menorNum)

int main(void) {
	setbuf(stdout,NULL);

	int i;
	int numero;
	int valor;

	for (i=0; i<10; i++)
	{
		printf ("Ingrese un numero");
		fflush (stdin);
		scanf ("%d", &num1);

		valor= numero(num);

		switch (valor)
		{
			case "1":
				//cuento y acumulo
				break;

			case "-1":
				//virifico si es el menor con flag y cuando salgo del for, llamo a una funcion que calcula la suma de los antecesores
				break;

			case "0":
				//cuento
				break;
		}
	}

	//llamar a calcular promedio

}


