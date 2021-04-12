#ifndef ARR_H_
#define ARR_H_

int arr_getInt (int* array, char* pMensaje, char* pError, int min, int max, int reintentos);
int arr_getMaximo (int arrayMax[], int limite, int* pResultado);  //int limite mayor a 0
int arr_getMinimo (int* arrayMin, int limite, int* pResultado); //el array tambien se valida != null porque es un puntero
int arr_getPromedio (int* arrayPromedio, int limite, float* pResultado);
#endif /* ARR_H_ */

