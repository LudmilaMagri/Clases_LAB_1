/*
 * utn.h
 *
 *  Created on: 15 abr. 2021
 *      Author: marco
 */

#ifndef UTN_H_
#define UTN_H_

#ifndef ALUMNO_H_
#define ALUMNO_H_

/*int utn_getString (char* pResultado, char* mensaje, char* mensajeError); //fgets()

int utn_isValidName(char* nombre);
int utn_isValidDni(char* nombre);
int utn_isValidCuit(char* nombre);
int utn_isValidMail(char* nombre);
int utn_isValidTelefono(char* nombre);
int utn_isValidEdad(char* nombre);
int utn_isValidDireccion(char* nombre);
int utn_isValidCreditCard(char* nombre);

int utn_getName (char* pResultado, char* mensaje, char* mensajeError, int reintentos); //¡
int utn_getEdad (int* pResultado, char* mensaje, char* mensajeError, int reintentos); //¡
int utn_getCuit (char* pResultado, char* mensaje, char* mensajeError, int reintentos); //¡
*/

int utn_getInt (int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos);
int utn_getChar (int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos);
int utn_isValidName (char* nombre);

#endif /* ALUMNO_H_ */


#endif /* UTN_H_ */
