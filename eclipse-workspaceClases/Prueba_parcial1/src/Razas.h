/*
 * Razas.h
 *
 *  Created on: 20 abr. 2021
 *      Author: ludmi
 */

#ifndef RAZAS_H_
#define RAZAS_H_

typedef struct
{
	int idRaza;
	char descripcion [2000];
	char tamanio[100];
	char paisOrigen[50];
}Razas;

#endif /* RAZAS_H_ */


//relaciono raza con mascota
/*
typedef struct
{
	int idRaza;
	int idMascota;
}RelacionRazaMascota;
*/
