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


int main(int argc, char *argv[]) {
	setbuf(stdout,NULL);
	int numero1;
	int numero2;
	int resultado;

	printf("\nIngrese 1 numero: ");
	scanf("%d",&numero1);
	printf("\nIngrese 2 numero: ");
	scanf("%d",&numero2);
	resultado= numero1-numero2;

	printf("\nEl resultado es: %d \n",resultado);

	if(resultado>0){
        printf("\nResultado positivo \n");
	}
	else{
        printf("\nResultado negativo \n");
	}



	return 0;
}
