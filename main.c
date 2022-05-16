#include <stdio.h>
#include <stdlib.h>

#define TAM 5

//1. Crear una función llamada aplicarAumento que reciba como parámetro el precio de un producto y
//devuelva el valor del producto con un aumento del 5%. Realizar la llamada desde el main.
typedef struct{

int id;
char nombre[20];
char tipo;
float efectividad;

}eVacuna;

int aplicarAumento(float precio);
int ordenarEstructura(eVacuna vacunasOrden);

int main()
{
    setbuf(stdout, NULL);

    float precio;
    float auxAumento;

    printf("Ingresar precio: ");
    scanf("%d", &precio);

    auxAumento = aplicarAumento(precio);


    return 0;
}

int aplicarAumento(float precio)
{
    float aumento;
    int porcentajeAumento = 5;
    float resultadoFinal;

    aumento = precio * porcentajeAumento / 100;
    resultadoFinal = precio + aumento;

    return resultadoFinal;

}

//2. Crear una función que se llame reemplazarCaracteres que reciba una cadena de caracteres como primer parámetro,
//un carácter como segundo y otro carácter  como tercero,  la misma deberá reemplazar cada ocurrencia del segundo
//parámetro por el tercero y devolver la cantidad de veces que se reemplazo ese carácter  en la cadena

/*int reemplazarCaracteres(cadena[], caracter, caracterDos)

//3. Dada la siguiente estructura generar una función que permita ordenar un array de dicha estructura por tipo.
//Ante igualdad de tipo deberá ordenarse por efectividad creciente. Hardcodear datos y mostrarlos desde el main.

typedef struct{

int id;
char nombre[20];
char tipo;
float efectividad;

}eVacuna;*/

int ordenarEstructura(eVacuna vacunasOrden)
{
    int todoOk = 0;
    int i;

    if(vacunasOrden != NULL && TAM > 0)
    {
       printf(" ***ORDEN***");
       printf("ID      NOMBRE    TIPO   EFECTIVIDAD");
       printf("%d         %s     %c           &d\n")

    }



}
