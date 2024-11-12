// Detallar qué imprime el siguiente código en los ejercicios:
#include <stdio.h>

int main(){
    int *punt, i;
    int x[5]={1, 2, 3, 4, 5};
    punt = x; // ahora el puntero apunta a la primer posicion del vector
    *punt = 9; //entonces x[0] = 9;
    for(i=0;i<5;i++){
        printf("%d,", x[i]);
    }
    
    return 0;
}

//va a devolver 9, 2, 3, 4, 5
