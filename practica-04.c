#include <stdio.h>

int main() 
{
//Variables declaradas
    float a;
    float b;
    float temp; //variable temporal para guardar el valor de A mientras se intercambian los valores de A y B.

//Entrada
    printf("Ingresa un valor para A: ");
    scanf("%f", &a);

    printf("Ingresa un valor para B: ");
    scanf("%f", &b);

//Salida
    printf("Se muestran A y B: %f, %f\n", a, b);

    //Proceso de intercambio de valores de A y B
    temp = a; //se guarda el valor de A en la variable temporal.
    a = b; //se asigna el valor de B a A.
    b = temp; //se asigna el valor guardado en la variable temporal (que es el valor original de A) a B.

//Salida después del intercambio
    printf("Se muestran los valores interacambiados\nSe muestran A y B\n %f, %f\n", a, b);

    return 0;
}