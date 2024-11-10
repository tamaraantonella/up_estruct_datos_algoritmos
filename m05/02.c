/******************************************************************************
Diseñar un algoritmo recursivo que permita invertir un número. Por ejemplo,
Entrada: 123 Salida: 321
*******************************************************************************/
#include <stdio.h>

void invertir(int a);

int main()
{
    int a;
    printf("Choose number a:");
    scanf("%d", &a);
    invertir(a);

    return 0;
}

void invertir(int a){
    if(a < 10){
         printf("%d", a);
         return;
    }
    printf("%d", a%10);
    invertir(a/10);
    
    return;
}
