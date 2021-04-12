/*
 ============================================================================

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int main(void)
{
	setbuf (stdout, NULL);

	int numero;

	if (utn_getNumero(&numero, "\nIngrese edad:", "\nFuera de rango", 0, 99, 3)==0)
	{
		printf ("Ingresaste %d", numero);
	}
}
