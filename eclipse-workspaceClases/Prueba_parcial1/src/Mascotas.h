/*
 * utn.h
 *
 *  Created on: 20 abr. 2021
 *      Author: ludmi
 */

#ifndef MASCOTAS_H_
#define MASCOTAS_H_

typedef struct
{
	int idMascota;
	char nombre [60];
	int edad;
	char sexo [11];
	char tipo [20];
	int idRaza; //cuando hacemos el alta de la mascota le imprimimos toda las razas y tomamos el id
}Mascotas;


void mostrarUnaMascota (Mascotas unaMascota);
void mostrarMascotas (Mascotas lista [], int limite);
void arrMascotas (Mascotas arrMascotas [], int limite);
void cargarMascota(Mascotas lista[], int limite);




#endif /* MASCOTAS_H_ */
