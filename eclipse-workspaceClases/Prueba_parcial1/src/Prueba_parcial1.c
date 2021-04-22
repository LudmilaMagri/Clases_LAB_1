/*
 ============================================================================
 #-Tenemos un listado de mascotas (nombre,edad,sexo{f o m},
tipo{gato ,perro o raro})
tenemos por ahora 5 mascotas pero tengo lugar para 10.
#Tenemos un listado de razas
(descripción,tamaño{chico ,mediano o grande},país de origen)
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Mascotas.h"
#include "Razas.h"



#define QTY_RAZAS 10
#define QTY_MASCOTAS 10


int main(void) {

	Razas auxRazas;
	//Razas arrayRazas [QTY_RAZAS];
	Mascotas auxMascotas;
	Mascotas arrayMascotas[QTY_MASCOTAS];


	return EXIT_SUCCESS;
}


void inicializarMascotas (Mascotas arrMascotas [], int limite)
{
	int i;
	int edad[5]={1, 4, 5, 6, 2};

	for (i=0; i<limite; i++)
	{
		arrMascotas[i].nombre[0] = 0;
		arrMascotas[i].edad = 0;
		arrMascotas[i].sexo[0] = 0;
		arrMascotas[i].tipo [0]= 0;
	}
}

int razaMascotaAlta (Mascotas arrMascotas [], int limite)
{
	int retorno = -1;
	char nombre [5][100] ={"Michi", "Ronnie", "Pepito", "Tito", "Mimi"};
	int edad [5][50] = {4,3,7,9,1};
	char sexo [5][10]={'m', 'm', 'm', 'm','f'};
	char tipo []


}

void mostrarUnaMascota (Mascotas unaMascota)
{

	printf ("Nombre: %s - Edad: %d - Sexo: %s - Tipo: %s \n", unaMascota.nombre, unaMascota.edad, unaMascota.sexo, unaMascota.tipo);
}

void mostrarMascotas (Mascotas lista [], int limite)
{
	int i;
	for (i= 0; i<limite; i++)
	{
		mostrarUnaMascota (lista [i]);
	}
}
