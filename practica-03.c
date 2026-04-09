#include <stdio.h>

int main(int argc, char const *argv[])
{
//Variables
    int valorHora;
    int horaDia;
    int suma;
    int mediaJornada;
    int semanal;

//Entrada
    printf("Ingresa el valor monetario de cada hora de trabajo ");
    scanf("%d", &valorHora);
    printf("Ingresa la cantidad de horas trabajadas por dia ");
    scanf("%d", &horaDia);

//Proceso
    suma = valorHora * horaDia;
    mediaJornada = horaDia / 2.0;
    semanal = suma * 5 + mediaJornada;

//Salida
    printf("El sueldo semanal es de: %d\n", semanal);
    return 0;
}
