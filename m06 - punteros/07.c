// Un programa en C contiene la siguiente declaración:
// int x[8]={10,20,30,40,50,60,70,80,80};
// a) ¿Cuál es el significado de x? --> x es un vector que apunta a la posicion 0 y reserva 8 posiciones en memoria para un dato de tipo int
// b) ¿Cuál es el significado de (x+2)? --> x[2]
// c) ¿Cuál es el valor de *x? ---> 10, porque apunta a la posicion 0
// d) ¿Cuál es el valor de (*x+2)?  --> 12, *x  es 10 y 10 + 2 = 12
// e) ¿Cuál es el valor de *(x+2) ---> 30
#include <stdio.h>

int main(){
    int x[8]={10,20,30,40,50,60,70,80};
    return 0;
}
