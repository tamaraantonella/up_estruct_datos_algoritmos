/******************************************************************************

Leer un texto carácter a carácter, terminado en PUNTO y repetirlo reemplazando 
los grupos ‘vl’ por ‘bl’.
*******************************************************************************/
#include <stdio.h>


int main()
{
    int c, aux;
    c = getchar();
    while(c != '.'){
        if(c != 'v'){
            putchar(c);
        }
        if(c == 'v'){
            aux = c;
            c=getchar();
            if(c == 'l'){
                putchar('b');
                putchar(c);
            }
        }
        c=getchar();
    }
    return 0;
}