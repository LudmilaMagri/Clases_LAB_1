/*
 ============================================================================
 Name        : Clase6_1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	setbuf(stdout, NULL);

	char nombre [11] ="JUAN"; // guarda letras de 10 y el \0
	char auxiliar [30]= "";

	/*strcpy (nombre, "JUAN");
	strcpy (auxiliar, nombre); //forma insegura. NO USAR*/


	//strncpy: forma segura. le pone un limite a la copia. nunca va a escribir en el espacio de memoria de otra variable
	strncpy (auxiliar, nombre, sizeof (auxiliar));

	//strnlen (auxiliar,sizeof (auxiliar)); // busca un \0 pero por las dudas se va fijando de no pasarse del tama?o qeu tiene el array

	strncat (nombre, "HOLA", sizeof (nombre)); //concateno

	sprintf (auxiliar, "MI SIZE OF ES %d", sizeof (auxiliar));//guarda dentro

	printf ("\n %s", auxiliar);

	printf ("\nSIZE Nombre mide %d --- aux mida %d", sizeof (nombre), sizeof (auxiliar));
	printf ("\nSTRNLEN Nombre mide %d --- aux mide %d", strnlen (nombre, sizeof (nombre)), strnlen (auxiliar, sizeof (nombre)));


	return EXIT_SUCCESS;
}
