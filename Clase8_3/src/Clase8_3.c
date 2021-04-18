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
 *
 */
#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int dia;
	int mes;
	int anio;
}Fecha;

struct s_Pepe{
	Fecha nacimiento;
};


void imprimirFecha(Fecha fechaParaImprimir)
{
	printf ("%d /%d/ %d", fechaParaImprimir.dia, fechaParaImprimir.mes, fechaParaImprimir.anio);
}

void imprimirFechaConPuntero(Fecha* pFechaParaImprimir) //guarda la direccion de memoria con todos los datos cargados
{
	//Fecha fAux; // ponemos Fecha porque ahi podes guardar todos los valores que tenes en ese tipo de dato que es Fecha
	//fAux = *pFechaParaImprimir; //obtengo un valor del tipo fecha y se guardo en fAux

	printf ("%d /%d/ %d", pFechaParaImprimir->dia,
						  pFechaParaImprimir->mes,
						  pFechaParaImprimir->anio);
							//uso la flecha para acceder cuando tengo un puntero y quiero acceder a una estructura
	pFechaParaImprimir-> anio = 2019; //modifico la dir de memoria
}


int main(void) {

	Fecha f;
	f.dia = 9;
	f.mes = 4;
	f.anio = 2021;

	imprimirFecha (f);

	imprimirFechaConPuntero(&f);

	/**
	  Fecha fechas [10];
	int i;

	for (i=0; i<10; i++)
	{
		//cargo todos los array con 2021
		fechas[i].anio = 2021;
	}
	 */




	return EXIT_SUCCESS;
}
