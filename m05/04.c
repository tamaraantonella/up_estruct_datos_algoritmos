/******************************************************************************
Diseñar un algoritmo recursivo que permita multiplicar los elementos de un vector.
*******************************************************************************/
#include <stdio.h>

void cargar(int vec[], int dim){
    if(dim <0 ){
         return;
    }
    printf("Ingrese el valor a cargar en la posicion %d:", dim);
    scanf("%d", &vec[dim]);
    return cargar(vec, dim-1);
}

void mostrar(int vec[], int dim, int index){
    if(dim == index){
        printf("%d", vec[index]);
        return;
    }
    mostrar(vec, dim, index + 1);
    printf("%d", vec[index]);
    return;
}

int multiplicar(int vec[], int n){
    if(n<0){
        return 1;
    }
    return multiplicar(vec, n-1) * vec[n];
}

int main()
{
    int a[25], dim, res;
    printf("Choose array dimension :");
    scanf("%d", &dim);
    cargar(a, dim-1);
    mostrar(a, dim-1, 0);
    res = multiplicar(a, dim-1);
    printf("\nel resultado de la multiplicaciòn es : %d", res);
    return 0;
}

