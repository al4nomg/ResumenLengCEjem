#include <stdio.h>

int main(int argc, char const *argv[])
{

//Variables
    float notaUno;
    float notaDos;
    float notaTres;
    float promedio;
    float suma;

//Entrada
    printf("Ingrese su primera nota: ");
    scanf("%f", &notaUno);
    printf("Ingrese su segunda nota: ");
    scanf("%f", &notaDos);
    printf("Ingrese su tercera nota: ");
    scanf("%f", &notaTres);

//Proceso
    suma = notaUno + notaDos + notaTres;
    promedio = suma / 3.0;

//Salida
    printf("Tu promedio es %.2f \n", promedio);

    return 0;
}
