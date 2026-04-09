#include <stdio.h>

int main(int argc, char const *argv[])
{
//Variables declaradas
    int numero;
    int multi;
    float inverso;

//Entrada
    printf("Ingresa un numero entero: ");
    scanf("%d", &numero);

//Proceso
    multi = numero * -1;
    inverso = 1.0 / numero;
//Salida
    printf("El numero opuesto es %d\n", multi);
    printf("El inverso de %d es: %.3f\n", numero, inverso);
    return 0;
}
