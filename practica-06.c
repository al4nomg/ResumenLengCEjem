#include <stdio.h>

int main(int argc, char const *argv[])
{

//Variables declaradas
    float ancho;
    float largo;
    float metroCuadrado;
    float total;
    float metroAlambre;

//Entrada
    printf("Ingresa el ancho del terreno\n");
    scanf("%f", &ancho);
    printf("Ingresa el largo del terreno\n");
    scanf("%f", &largo);
    printf("Ingresa el valor de m2\n");
    scanf("%f", &metroCuadrado);

//Proceso
    total = metroCuadrado * (ancho * largo);
    metroAlambre = (ancho + largo) * 2.0 * 3.0; 
    /*se suman el ancho y el largo para sacar el perímetro del terreno, se multiplica por 
    2 para sacar el total de metros de alambre necesarios para cercar el terreno, y se multiplica por 3 
    porque se necesitan 3 hilos de alambre para cercar el terreno.*/

//Salida
    printf("El terreno vale $%.2f\n", total);
    printf("Para cercarlo en 3 pasadas, se necesitan %d m de alambre\n", (int)metroAlambre);
    return 0;
}
