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

int validarQueSeaNumero (char* texto);

int main(void) {
	setbuf(stdout, NULL);

	char texto [11];
	int saldoBanco = 1;
	//scanf ("%s", texto); no va y gets tampoco porque no le podemos pasar el limite del array

	fgets (texto, 11, stdin);//array, tama?o, de donde va a leer
	//me deshago del enter antes de usar la cadena
	if (texto [strlen (texto)-1]==10)
	{
		texto[strlen(texto)-1] = 0;
	}

	//validar que sean todos los caracteres numericos
	if (validarQueSeaNumero (texto)==1)
	{
		saldoBanco=atoi (texto);
	}


	printf("\nIngresaste:  %d", saldoBanco);

	return EXIT_SUCCESS;
}

int validarQueSeaNumero (char* texto)
{
	int retorno = 1;
	int i= 0;
	if (texto !=NULL)
	{
		retorno = 1;
		while (texto[i] != 0)
			{
				//detecto simbolo erroneo (fuera del rango 0-9)

				//if (texto [i]< 48 || texto[i]> 57 ) //entra porque esta mal y no corresponde a un simbolo
				if (texto[i]< '0' || texto [i]> '9') // es lo mismo que lo de arriba
				{
					//hay un error
					 retorno =-1;
					 break;
				}
				i++;
				retorno = 1;
			}
	}
	return retorno;
}
