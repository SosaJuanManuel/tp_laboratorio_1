/*
 * funciones.h
 *
 *  Created on: 16 abr. 2021
 *      Author: Sosa Juan Manuel
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_

int ingresarNumero(char *mensaje, float *unOperador);
int sumar(float numeroUnoSuma, float numeroDosSuma, int flag1, int flag2);
int restar(float numeroUnoResta, float numeroDosResta, int flag1, int flag2);
int multiplicar(float numeroUnoMultiplicador, float numeroDosMultiplicador, int flag1, int flag2);
int dividir(float numeroUnoDividendo, float numeroDosDivisor, int flag1, int flag2);
int factorial (int numeroFactorial, int flag1);

#endif /* FUNCIONES_H_ */
