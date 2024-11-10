/******************************************************************************
Diseñar un algoritmo recursivo que permita sumar los dígitos de un número. Por
ejemplo, Entrada: 123 Resultado: 6
*******************************************************************************/
#include <stdio.h>

int sumar(int a);

int main()
{
    int a, res;
    printf("Choose number a:");
    scanf("%d", &a);
    res = sumar(a);
    printf("El resultado es %d", res);
    return 0;
}

int sumar(int a){
    if(a < 10){
        return a;
    }
    return a%10 + sumar(a/10) ;
    
    
}
