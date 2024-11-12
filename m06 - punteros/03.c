// Detallar qué imprime el siguiente código en los ejercicios:
#include <stdio.h>

int main(){
    int *punta, *puntb;
    int x=7;
    int y=5;
    punta = &x;
    *punta = 3; // x=3;
    puntb=&y;
    *puntb=x; //y=3;
    x=9;
    printf("%d, %d", *puntb, x);
    return 0;
}

//va a devolver 3  y 9.
//9 porque la x es el ultimo valor que se le asigna y ademas porque puntb quedo apuntando a y, que vale 3
