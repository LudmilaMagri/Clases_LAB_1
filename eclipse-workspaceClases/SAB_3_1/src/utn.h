/*
 * utn.h
 *
 *  Created on: 17 abr. 2021
 *      Author: marco
 */

#ifndef UTN_H_
#define UTN_H_

int utn_arrayNumero (int* pResultado, char* pMensje, char* pMensajeError, int minimo, int maximo);
int utn_arrayPositivos (int* arrayPos, int* pResultado, int limite);
int utn_arrayNegativos (int* arrayNeg, int* pResultado, int limite);
int utn_getMaximoImpar (int arrayMax[], int limite, int* pResultado);



#endif /* UTN_H_ */
