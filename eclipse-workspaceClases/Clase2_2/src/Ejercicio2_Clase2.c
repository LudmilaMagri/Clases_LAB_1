/*
 ============================================================================
Realizar un programa que solicite cinco números e imprima por pantalla el promedio, el máximo y el mínimo.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);
	int max;
	int min;
	int i;
	int bufferInt;
	int acumulador=0;
	int contador=0;
	float promedio;


	for (i=0; i<5; i++)
	{
		printf("Ingrese un numero %d \n", i+1);
		scanf("%d", &bufferInt);
		contador++;
		acumulador=acumulador+bufferInt;

		if (i==0)
		{
			max = bufferInt;
			min = bufferInt;
		}
		else
		{
			if (bufferInt>max)
			{
				max=bufferInt;
			}
			if(bufferInt<min)
			{
				min=bufferInt;
			}
		}
	}

	promedio = (float)acumulador/contador;

	printf("\nEl numero maximo es: %d y el numero minimo es: %d", max, min);
	printf ("\n El promedio de los numeros es: %f", promedio);

	return 0;
}

