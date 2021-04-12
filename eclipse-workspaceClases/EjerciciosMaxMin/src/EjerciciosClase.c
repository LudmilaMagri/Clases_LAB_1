/*
 ============================================================================
 Name        : proyecto.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
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


	for (i=0; i<5; i++)
	{
		printf("Ingrese un numero %d \n", i+1);
		scanf("%d", &bufferInt);

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
	printf("\nEl numero maximo es: %d y el numero minimo es: %d", max, min);

	return 0;
}

