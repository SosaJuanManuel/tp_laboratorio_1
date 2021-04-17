/*
 ============================================================================
 Name        : trabajoPractico1.c
 Author      : Sosa Juan Manuel
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(void)
{
    char seguir='s';
    int opcion=0;
    float numeroUno;
    float numeroDos;
    int flag1 = -1;
    int flag2 = -1;

    while(seguir=='s')
    {
        if (flag1 == -1 || flag2 == -1)
        {
            printf("\n1- Ingresar 1er operando (A = X)\n");
            printf("\n1- Ingresar 2do operando (B = Y)\n");
        }
        else
        {
            printf("\n1- Ingresar 1er operando (A = %.2f)\n",numeroUno);
            printf("\n1- Ingresar 2do operando (B = %.2f)\n",numeroDos);
        }
        printf("\n3- Calcular la suma (A + B)\n");
        printf("\n4- Calcular la resta (A - B)\n");
        printf("\n5- Calcular la division (A / B)\n");
        printf("\n6- Calcular la multiplicacion (A * B)\n");
        printf("\n7- Calcular el factorial (A!)\n");
        printf("\n8- Calcular todas las operaciones\n");
        printf("\n9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            flag1 = ingresarNumero ("\n1- Ingresar primer operando: ", &numeroUno);
            break;
        case 2:
            flag2 = ingresarNumero ("\n2-Ingresar el segundo operando: ", &numeroDos);
            break;
        case 3:
            sumar (numeroUno, numeroDos, flag1, flag2);
            break;
        case 4:
            restar (numeroUno, numeroDos, flag1, flag2);
            break;
        case 5:
            dividir (numeroUno, numeroDos, flag1, flag2);
            break;
        case 6:
            multiplicar (numeroUno, numeroDos, flag1, flag2);
            break;
        case 7:
            factorial (numeroUno, flag1);
            break;
        case 8:
            sumar (numeroUno, numeroDos, flag1, flag2);
            restar (numeroUno, numeroDos, flag1, flag2);
            dividir (numeroUno, numeroDos, flag1, flag2);
            multiplicar (numeroUno, numeroDos, flag1, flag2);
            factorial (numeroUno, flag1);
            break;
        case 9:
            seguir = 'n';
            break;
        }
    }
    return 0;
}
