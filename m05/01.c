/******************************************************************************

Diseñar un algoritmo recursivo que permita hacer la división por restas sucesivas

*******************************************************************************/
#include <stdio.h>

int divide(int a, int b);

int main()
{
    int a, b, res;
    printf("Choose number a:");
    scanf("%d", &a);
    printf("Choose number b:");
    scanf("%d", &b);
    
    res = divide(a, b);
    printf("el resultado es %d", res);

    return 0;
}

int divide(int a, int b){
    int res = a - b;
    if(res <= 0){
        return 1;
    }
    return divide(res, b) + 1;
}
