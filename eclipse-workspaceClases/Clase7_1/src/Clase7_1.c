/*
 ============================================================================
 Name        : Clase7.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */




// sizeof(arrayTexto) : la variable que guarda la direc de memoria de cada simbolo
//  \0 -> es el numero 0



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void myPrintDeCadena (char* arrayTexto)
{
	int i=0;
	//for (i=0; i<len; i++)
	while (arrayTexto [i] != 0) //imprime hasta que ve la x
	{
		printf ("\n %c", arrayTexto [i]); // lo esta imprimiendo como num en la tabla ascii y como letra por %c
		i++;
	}
}

int main(void) {
	setbuf(stdout, NULL);


	int i;
	int j;
	//int numeros [4];
	char texto[7]= {72, 'B', 'C',0, 'D', 'X', 0}; // COMILLA SIMPLE, se usa char por el tama?o de memoria que es menor. utilizo 0 sin comillas porque es un numero invisible, en acii es invisible, no me lo traduce con ninguna letra.
// siempre cuento un elemento mas para guardar el 0.

	/*for (i=0; i<4; i++)
	{
		printf ("\n %s", texto); // lo esta imprimiendo como num en la tabla ascii y como letra por %c
	}*/

	myPrintDeCadena (texto); // el nombre del array es la direccion de memoria de donde comienza el array

	i= strlen (texto); //. Es una funcion que cuenta la cadena de caracteres distintos de 0. hay que incluir string.h

	j= sizeof (texto); // Cuenta la cantidad de bytes que tiene el array. el sizeof devuelve la cantidad de bytes del array. Sentencia de pre compilacion, se reemplaza por un valor antes de compilar.

	printf ("\n La cadena mide: %d", i);
	printf ("\n El sizeof devuelve: %d", j);

	return EXIT_SUCCESS;
}


