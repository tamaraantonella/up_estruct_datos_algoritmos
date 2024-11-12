// Detallar qué imprime el siguiente código en los ejercicios:
#include <stdio.h>

int main(){
    int *punt;
    int x=7, y=5;
    punt = &x;
    x=4;
    punt=&y;
    printf("%d, %d", *punt, x);
    return 0;
}

//Devuelve 5 y 4, porque punt en la linea 9 termina apuntando a y, entonces acceder al contenido que apunta punt = y = 5;
