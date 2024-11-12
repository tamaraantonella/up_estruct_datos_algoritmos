// Detallar qué imprime el siguiente código en los ejercicios:
#include <stdio.h>

int main(){
    int *punt;
    int x=7, y=5;
    punt = &x;
    *punt = 3; //x=3;
    punt=&y; //
    *punt=x; //y=3;
    x=9;
    printf("%d, %d", *punt, x);
    return 0;
}

//va a devolver 3  y 9.
//9 porque la x es el ultimo valor que se le asigna.
//

