/*
 ============================================================================
Realizar un programa que pida un numero al usuario,
despues que pida una operacion (+ - / *).
ejecutar la operacion sumar () restar () multiplicar () dividir()
y luego mostrar al usuario el resultado (no debe estar en las funciones
de las operaciones). En funcion dividir validar no dividir por cero.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int sumar (int operador1, int operador2, float* pResultado); //declaro el prototipo
int restar (int operador1, int operador2, float* pResultado);
int multiplicar (int operador1, int operador2, float* pResultado);
int dividir (int operador1, int operador2, float* pResultado);

int main(void) {
	setbuf (stdout, NULL);

	int numUno;
	int numDos;
	char operacion;
	float resultado;
	int respuesta;

	printf ("Ingrese un numero");
	fflush(stdin); // si quedo cargado un enter, el scanf encuentra el enter y no nos permite ingresar algo.
	scanf  ("%d", &numUno);


	printf ("Ingrese otro numero");
	fflush(stdin);
	scanf ("%d", &numDos);

	printf ("Ingrese el tipo de operacion: [+, - , *, /]");
	fflush(stdin);
	scanf ("%c", &operacion);

	switch (operacion)w
	{
		case '+':
			respuesta= sumar (numUno, numDos, &resultado);
			break;

		case '-':
			respuesta= restar (numUno, numDos, &resultado);
			break;

		case '*':
			respuesta= multiplicar (numUno, numDos, &resultado);
			break;

		case '/':
			respuesta= dividir (numUno, numDos, &resultado);
			break;
	}

	if (respuesta ==0)
	{
		printf ("El resultado de la operacion es: %2.f", resultado);
	}
	else
	{
		printf ("No se pudo realizar la operacion");
	}

}

int sumar (int operador1, int operador2, float* pResultado)
{
	*pResultado= operador1+operador2;
	return 0;
}

int restar (int operador1, int operador2, float* pResultado)
{
	*pResultado= operador1-operador2;
	return 0;
}

int multiplicar (int operador1, int operador2, float* pResultado)
{
	*pResultado=operador1*operador2;
	return 0;
}


int dividir (int operador1, int operador2, float* pResultado)
{
	int retorno= -1;
	if (pResultado != NULL && operador2 !=0)
	{
		*pResultado = (float)operador1/operador2;
		retorno = 0;
	}
	return retorno;
}

