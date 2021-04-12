/*
 ============================================================================

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int sumar (int numeroA, int numeroB, int* pResultado);

int main(void) {
	setbuf (stdout, NULL);

	/*int edad =54; //direccion de memoria y valor, valor basura: cargado con lo que tenia antes
	int* pEdad;

	pEdad = &edad;

	printf ("DIR %p - VALOR %d", &edad, edad);
	printf ("\nDIR %p - VALOR %d", pEdad, *pEdad);

	return 0;

	*/

	  float altura =1.88;
	  int resultado;
	  float* pAltura;  //puede guardar la direccion de cualquier memoria del tipo float

	  if (sumar (2,3, &resultado) ==0) //el tercer parametro es la direccion de memoria donde va a guardar el resultado
	  {
		  printf ("OK"); // si la funcion salio bien, la indicamos con 0
	  }
	  else
	  {
		  printf ("Error");
	  }



//pAltura = &altura;
//	printf ("DIR %p - VALOR %d", &altura, altura);
//	printf ("\nDIR %p - VALOR %d", pAltura, *pAltura);


	 // & --> muestra la direccion de memoria
	 // * --> accedemos al valor apuntado de la memoria de la variable

	}

int sumar (int numeroA, int numeroB, int* pResultado)
{
	*pResultado = numeroA+numeroB; //esta accediendo al valor apuntado por pResultado es el espacio de memoria &resultado
	return 0;
}



