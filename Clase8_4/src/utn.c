/*
 * utn.c
 *
 *  Created on: 15 abr. 2021
 *      Author: marco
 */


/*int imprimirArrayProducto(Producto* pArray, int limite)
{
	int retorno = -1;
	int i;
	if (pArray != NULL && limite>0)
	{
		for (i=0; i < limite; i++)
		{
			printf ("\nNombre: %s - Legajo %d - Altura %2.f", pArray[i].nombre, pArray[i].legajo, pArray[i].altura);

		}
		retorno = 0;
	}

	return retorno;
}
*/
#include "utn.h"

int prod_cargarProducto (Producto* arrayRecibido, int limite, int indiceRecibido)
{
	int retorno= -1;
	Producto prodAux;

	if (arrayRecibido!=NULL && limite>0 && indiceRecibido<limite)
	{
		/*if (utn_getString ("nombre:", arrayRecibido[indiceRecibido].nombre, ..)==0)
		{
			if (utn_getString ("Ingrese la descripcion del producto",arrayRecibido[indiceRecibido].descripcion, ..)==0)
			{
				if (utn_getFloat ("Precio:", &arrayRecibido[indiceRecibido].precio)==0)
				{
					arrayRecibido[indiceRecibido].flagIsEmpty=0; //elemento cargado
				}
			}
		}

		retorno = 0;
	}*/
		if (utn_getString ("nombre:", prodAux.nombre, ..)==0)
				{
					if (utn_getString ("Ingrese la descripcion del producto",prodAux.descripcion, ..)==0)
					{
						if (utn_getFloat ("Precio:", &arrayRecibido[indiceRecibido].precio)==0)
						{
							arrayRecibido[indiceRecibido] =prodAux;
							arrayRecibido[indiceRecibido].flagIsEmpty=0; //elemento cargado
						}
					}
				}

				retorno = 0;
			}


	return retorno;
}

int prod_printProducto (Producto* arrayRecibido, int limite, int indiceRecibido)
{
	if (arrayRecibido!=NULL && limite>0 && indiceRecibido<limite)
	{
		printf ("%s %s %f", arrayRecibido[indiceRecibido].nombre,
							arrayRecibido[indiceRecibido].descripcion,
							arrayRecibido[indiceRecibido].precio);
	}
}


