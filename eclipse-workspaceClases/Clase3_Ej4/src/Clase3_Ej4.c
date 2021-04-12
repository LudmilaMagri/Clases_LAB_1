/*
 ============================================================================
//el divisor tiene que ser !=0
//dos numeros, espacio para resultado, indicar 0 si salio todo bien, o -1 si salio mal

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


float dividir (float numeroA, float numeroB, float* pResultado);

int main(void)
{
	setbuf (stdout, NULL);

	float resultado;


	if (dividir (10,5, &resultado)==0)
	{
		printf ("El resultado es: %2.f", resultado);
	}
	else
	{
		printf ("ERROR");
	}
	return EXIT_SUCCESS;

}

float dividir (float numeroA, float numeroB, float* pResultado){

	if (numeroB ==0)
	{
		return -1;
	}
	else
	{
		*pResultado = numeroA/numeroB;
		return 0;
	}
}
