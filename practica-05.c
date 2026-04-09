#include <stdio.h>

int main(int argc, char const *argv[])
{
    
//Variables declaradas
    float precio;
    float venta;
    float totalMensual;
    float sueldoTotal;

//Entrada
    printf("Cuanto vale cada articulo?\n");
    scanf("%f", &precio);
    printf("Cuantos articulos se vendieron en el mes?\n");
    scanf("%f", &venta);

//Proceso
    totalMensual = precio * venta;
    sueldoTotal = 14000 + (totalMensual * 0.16); //se multiplica el total mensual por 0.16 para sacar el %16 del total mensual.

//Salida
    printf("El sueldo mensual es de $%f\n", sueldoTotal);

    return 0;
}
