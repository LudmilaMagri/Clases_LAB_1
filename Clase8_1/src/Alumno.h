/*
 * utn.h
 *
 *  Created on: 15 abr. 2021
 *      Author: marco
 */
//prototipo de Alumno

typedef struct
{
	int legajo;
	char nombre [51];
	float altura;
	char apellido [51];
}Alumno;


int imprimirArrayAlumnos(Alumno* pArray, int limite);
