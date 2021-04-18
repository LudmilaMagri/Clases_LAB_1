/*
 ============================================================================
 Name        : Clase8_3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/**
 *1) Definir un tipo de dato que represente un producto. El producto tiene un nombre, una descripcion y un precio
 *2) Definir un array de 200 productos, indicar de alguna manera que la info de cada item no esta cargada.
 *3) Realizar una funcion que reciba el array, un indice, y le permita al usuario cargar los datos en el item de la posicion especificada por el indice.
 4) Realizar una funcion que reciba el array y un indice e imprima los datos del item de la posicion especificada por el indice.
 5) Realizar una funcion que me devuelva el indice de un item vacio (sin cargar).
 */
#include <stdio.h>
#include <stdlib.h>
#define QTY_PROD 200


typedef struct{
	char nombre [52];
	char descripcion [128];
	float precio;
	int flagIsEmpty; //cuando es verdadero (1): significa que el elemento esta vacio.
}Producto;

int utn_getNombre (char* pNombre)
{
	int retorno = 1;
		int i= 0;
		if (pNombre !=NULL)
		{
			retorno = 1;
			while (pNombre[i] != 0)
				{
					if (pNombre[i]< '65' || pNombre [i]> '122')
					{
						 retorno =-1;
						 break;
					}
					i++;
					retorno = 1;
				}
		}
		return retorno;
}


int utn_getPrecio (char* pPrecio)
{
	int retorno = 1;
	int i= 0;
	if (pPrecio !=NULL)
	{
		retorno = 1;
		while (pPrecio[i] != 0)
			{
				if (pPrecio[i]< '0' || pPrecio [i]> '9')
				{
					 retorno =-1;
					 break;
				}
				i++;
				retorno = 1;
			}
	}
	return retorno;
}

void inicializarArray (Producto* array, int limite)
{
	int i;

	for (i=0; i<limite; i++)
	{
		//array[i].nombre[0]= 0;
		//array[i].descripcion[0]= 0;
		//array[i].precio= 0.0;
		array[i].flagIsEmpty = 1; //indica que esta vacio
	}
}


int main(void) {

	Producto arrayProducto [QTY_PROD];
	int indice;

	indice = prod_buscarIndiceVacio (productos,200);

	inicializarArray(arrayProducto, QTY_PROD);

	return EXIT_SUCCESS;

	int recibirArray (productos, QTY_PROD, indice)


}


