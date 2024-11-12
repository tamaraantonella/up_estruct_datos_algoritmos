// 5. Escribir un programa efectúe las siguientes operaciones:
// a) Declarar un arreglo de quince posiciones de tipo float. Cargar sus elementos y mostrarlo.
// b) Declarar un puntero a float.
// c) Asignar al puntero la dirección del arreglo.
// d) Recorrer con el puntero el arreglo, mostrando la dirección y el contenido de cada posición
#include <stdio.h>
void load(float vec[15], int n){
    int i;
    for(i=0;i<n;i++){
        printf("\ningrese el numero de la posicion %d: ", i);
        scanf("%f", &vec[i]);
    }
}

void show(float vec[15], int n){
    int i;
    for(i=0;i<n;i++){
        printf("%f \t", vec[i]);
    }
}

int main(){
    float vec[15], *p=NULL;
    int i, size=3;
    p=vec;
    load(vec, size);
    show(vec, size);
    printf("\n");
    for(i=0;i<size;i++){
        printf("%f \t", *(p+i));
    }
    return 0;
}

