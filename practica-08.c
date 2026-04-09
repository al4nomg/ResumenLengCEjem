#include  <stdio.h>

int main(int argc, char const *argv[])
{
//Variables declaradas
    int anguloUno;
    int anguloDos;
    int resultado;

//Entrada
    printf("Ingresa el valor del primer angulo\n");
    scanf("%d", &anguloUno);
    printf("Ingresa el valor del segundo angulo\n");
    scanf("%d", &anguloDos);

//Proceso
    resultado = 180 - (anguloUno + anguloDos);

//Salida
    printf("El angulo restante mide %d grados.\n", resultado);

    return 0;
}
