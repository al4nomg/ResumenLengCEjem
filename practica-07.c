#include <stdio.h>

int main(int argc, char const *argv[])
{
//Variables declaradas
    int a;
    int b;
    int suma;
    int resta;
    int multiplicacion;
    float division;
    
//Entrada
    printf("Ingresa el primer numero\n");
    scanf("%d", &a);
    printf("Ingresa el segundo numero\n");
    scanf("%d", &b);

//Proceso
    suma = a + b;
    resta = a - b;
    multiplicacion = a * b;
    division = (float)a / b;

    printf("%d + %d => %d\n", a, b, suma);
    printf("%d - %d => %d\n", a, b, resta);
    printf("%d * %d => %d\n", a, b, multiplicacion);
    printf("%d / %d => %f\n", a, b, division);

    return 0;
}
