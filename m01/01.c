/*
Calcular el índice de masa corporal ingresando el peso de una persona en kilos y su
estatura en metros. Este índice se obtiene realizando el cociente entre el peso y el
cuadrado de la estatura
*/

#include <stdio.h>

int main()
{
    int peso;
    float altura;
    
    printf("Ingresar peso en kg:");
    scanf("%d", &peso);
    
    printf("Ingresar estatura en metros:");
    scanf("%f", &altura);
    
    printf("El indice de masa corporal es %f", peso/altura);

    return 0;
}