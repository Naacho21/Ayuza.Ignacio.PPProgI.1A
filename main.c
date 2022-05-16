#include <stdio.h>
#include <stdlib.h>

#define TAM 5

//1. Crear una funci�n llamada aplicarAumento que reciba como par�metro el precio de un producto y
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

//2. Crear una funci�n que se llame reemplazarCaracteres que reciba una cadena de caracteres como primer par�metro,
//un car�cter como segundo y otro car�cter  como tercero,  la misma deber� reemplazar cada ocurrencia del segundo
//par�metro por el tercero y devolver la cantidad de veces que se reemplazo ese car�cter  en la cadena

/*int reemplazarCaracteres(cadena[], caracter, caracterDos)

//3. Dada la siguiente estructura generar una funci�n que permita ordenar un array de dicha estructura por tipo.
//Ante igualdad de tipo deber� ordenarse por efectividad creciente. Hardcodear datos y mostrarlos desde el main.

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
